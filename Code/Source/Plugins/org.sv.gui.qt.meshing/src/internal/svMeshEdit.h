#ifndef SVMESHEDIT_H
#define SVMESHEDIT_H

#include "svMitkMesh.h"
#include "svModel.h"

//#include "svMitkMeshDataInteractor.h"

#include <QmitkFunctionality.h>

#include <vtkSphereWidget.h>
#include <vtkPlaneWidget.h>
#include <vtkBoxWidget.h>

#include <QWidget>
#include <QStandardItemModel>

namespace Ui {
class svMeshEdit;
}

class svMeshEdit : public QmitkFunctionality
{
    Q_OBJECT

public:

    static const QString EXTENSION_ID;

    svMeshEdit();

    virtual ~svMeshEdit();

public slots:

    void CreateMesh();

    void RunHistory();

    void ClearAll();

    void UpdateGUI();

public:

    int GetTimeStep();

    void RunCommands(bool fromGUI = true);

//    std::vector<int> GetSelectedFaceIDs();

    virtual void CreateQtPartControl(QWidget *parent) override;

    virtual void OnSelectionChanged(std::vector<mitk::DataNode*> nodes) override;

    virtual void NodeChanged(const mitk::DataNode* node) override;

    virtual void NodeAdded(const mitk::DataNode* node) override;

    virtual void NodeRemoved(const mitk::DataNode* node) override;

//    virtual void Activated() override;

//    virtual void Deactivated() override;

    virtual void Visible() override;

    virtual void Hidden() override;

protected:

    QWidget* m_Parent;

    Ui::svMeshEdit *ui;

    svMitkMesh* m_MitkMesh;

    svModel* m_Model;

    std::string m_MeshType;

    mitk::DataNode::Pointer m_MeshNode;

//    mitk::DataNode::Pointer m_MeshFolderNode;

//    mitk::DataNode::Pointer m_ModelNode;

//    svMitkMeshDataInteractor::Pointer m_DataInteractor;

    long m_ModelSelectFaceObserverTag;
    long m_MeshUpdateObserverTag;

    QmitkStdMultiWidget* m_DisplayWidget;

    QMenu* m_SphereTableMenu;
    QStandardItemModel* m_SphereTableModel;

    QMenu* m_FaceListTableMenu;
    QStandardItemModel* m_FaceListTableModel;

    vtkSmartPointer<vtkSphereWidget> m_SphereWidget;

};

#endif // SVMESHEDIT_H