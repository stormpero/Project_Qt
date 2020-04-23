#ifndef PROJECT_DM_QT_H
#define PROJECT_DM_QT_H

#include <QMainWindow>
#include <QString>
#include <QLineEdit>
#include "Allfunc.h"
#include "natural.h"
#include "integer.h"
#include "rational.h"
#include "matrix.h"

typedef vector<vector<vector<int>>> Matrix;

QT_BEGIN_NAMESPACE
namespace Ui { class Project_DM_Qt; }
QT_END_NAMESPACE

class Project_DM_Qt : public QMainWindow
{
    Q_OBJECT

public:
    Project_DM_Qt(QWidget *parent = nullptr);
    ~Project_DM_Qt();

private slots:

    // Main buttons slots /////////////
    void on_Btn_natural_clicked();
    void on_Btn_integer_clicked();
    void on_Btn_rational_clicked();
    void on_Btn_polynomials_clicked();
    void on_Btn_matrix_clicked();
    //\////////////////////////////////
    bool check_zero(vector <int> zero);
    //\////////////////////////////////
    // Disablebuttons /////
    void disablebuttons();

    //Natural//////////////////////////////
    void natural();
    vector <int> natural_convert(QString a);
    //|/////////////////////////////////////

    //Integer//////////////////////////////
    void integ();
    vector <int> integ_convert(QString a);
    //|/////////////////////////////////////

    //Rational//////////////////////////////
    void ration();
    Drob ration_convert(QString a, QString b);

    //\/////////////////////////////////////

    //Polynoms//////////////////////////////
    void poly_add();
    vector<Drob> poly_out();
    void Create_poly();
    //\/////////////////////////////////////

    // Matrices ////////////////////////////
    void customSlot(const QString &str);
    void finishSlot();
    void keyPressEvent(QKeyEvent* event);
    void on_m_calc_clicked();    
    void on_spinBox_valueChanged(int arg1);
    //\/////////////////////////////////////


    //Help_info/////////////////////////////
    void on_natural_Button_help_clicked();
    //\////////////////////////////////

private:
    Ui::Project_DM_Qt *ui;

    // Matrices ///////////////////////////////////////////
    void createCell(QLineEdit* ple, bool readonly);
    void increaseCells();
    void decreaseCells();
    QList<QLineEdit*> getData(Matrix &mat1, Matrix &mat2);
    //\////////////////////////////////////////////////////

};
#endif // PROJECT_DM_QT_H
