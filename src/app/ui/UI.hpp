/********************************************************************************
** Form generated from reading UI file 'untitledVyUnul.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UNTITLEDVYUNUL_H
#define UNTITLEDVYUNUL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QListView *listView_tab1;
    QPushButton *delete_selected_tab1;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *add_word_tab1;
    QLineEdit *lineEdit_tab1;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *common_chars_tab1;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *table_of_sportsmens_in;
    QPushButton *delete_sportsmen_tab2;
    QFrame *line_4;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QSpinBox *fisrt_spotsmen_num_tab2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QSpinBox *second_sportsmen_num_tab2;
    QPushButton *add_spotsmen_tab2;
    QFrame *line_5;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QTreeWidget *table_of_sportsmens_out;
    QWidget *tab_3;
    QGridLayout *gridLayout_6;
    QLCDNumber *stack_display_tab3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(582, 392);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        listView_tab1 = new QListView(groupBox);
        listView_tab1->setObjectName("listView_tab1");
        listView_tab1->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_3->addWidget(listView_tab1, 0, 0, 1, 1);

        delete_selected_tab1 = new QPushButton(groupBox);
        delete_selected_tab1->setObjectName("delete_selected_tab1");
        delete_selected_tab1->setEnabled(false);
        delete_selected_tab1->setCheckable(false);
        delete_selected_tab1->setFlat(false);

        gridLayout_3->addWidget(delete_selected_tab1, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        line_2 = new QFrame(tab);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        add_word_tab1 = new QPushButton(tab);
        add_word_tab1->setObjectName("add_word_tab1");

        horizontalLayout_3->addWidget(add_word_tab1);

        lineEdit_tab1 = new QLineEdit(tab);
        lineEdit_tab1->setObjectName("lineEdit_tab1");

        horizontalLayout_3->addWidget(lineEdit_tab1);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout);

        line = new QFrame(tab);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName("gridLayout_4");
        common_chars_tab1 = new QLabel(groupBox_2);
        common_chars_tab1->setObjectName("common_chars_tab1");

        gridLayout_4->addWidget(common_chars_tab1, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        table_of_sportsmens_in = new QTreeWidget(groupBox_3);
        table_of_sportsmens_in->setObjectName("table_of_sportsmens_in");
        table_of_sportsmens_in->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_of_sportsmens_in->setColumnCount(2);

        verticalLayout_3->addWidget(table_of_sportsmens_in);

        delete_sportsmen_tab2 = new QPushButton(groupBox_3);
        delete_sportsmen_tab2->setObjectName("delete_sportsmen_tab2");

        verticalLayout_3->addWidget(delete_sportsmen_tab2);

        line_4 = new QFrame(groupBox_3);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName("groupBox_5");
        horizontalLayout_5 = new QHBoxLayout(groupBox_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label = new QLabel(groupBox_5);
        label->setObjectName("label");

        verticalLayout_4->addWidget(label);

        fisrt_spotsmen_num_tab2 = new QSpinBox(groupBox_5);
        fisrt_spotsmen_num_tab2->setObjectName("fisrt_spotsmen_num_tab2");
        fisrt_spotsmen_num_tab2->setMaximum(1000000);

        verticalLayout_4->addWidget(fisrt_spotsmen_num_tab2);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName("label_2");

        verticalLayout_5->addWidget(label_2);

        second_sportsmen_num_tab2 = new QSpinBox(groupBox_5);
        second_sportsmen_num_tab2->setObjectName("second_sportsmen_num_tab2");
        second_sportsmen_num_tab2->setMaximum(1000000);

        verticalLayout_5->addWidget(second_sportsmen_num_tab2);


        horizontalLayout_5->addLayout(verticalLayout_5);

        add_spotsmen_tab2 = new QPushButton(groupBox_5);
        add_spotsmen_tab2->setObjectName("add_spotsmen_tab2");

        horizontalLayout_5->addWidget(add_spotsmen_tab2);


        verticalLayout_3->addWidget(groupBox_5);


        horizontalLayout_4->addWidget(groupBox_3);

        line_5 = new QFrame(tab_2);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_5);

        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName("gridLayout_5");
        table_of_sportsmens_out = new QTreeWidget(groupBox_4);
        table_of_sportsmens_out->setObjectName("table_of_sportsmens_out");
        table_of_sportsmens_out->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_5->addWidget(table_of_sportsmens_out, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_4);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_6 = new QGridLayout(tab_3);
        gridLayout_6->setObjectName("gridLayout_6");
        stack_display_tab3 = new QLCDNumber(tab_3);
        stack_display_tab3->setObjectName("stack_display_tab3");
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif")});
        stack_display_tab3->setFont(font);
        stack_display_tab3->setAutoFillBackground(false);
        stack_display_tab3->setDigitCount(5);
        stack_display_tab3->setMode(QLCDNumber::Dec);

        gridLayout_6->addWidget(stack_display_tab3, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);
        delete_selected_tab1->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\201\320\273\320\276\320\262", nullptr));
        delete_selected_tab1->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\265 \321\201\320\273\320\276\320\262\320\276", nullptr));
        add_word_tab1->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\273\320\276\320\262\320\276", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\270\320\265 \320\261\321\203\320\272\320\262\321\213", nullptr));
        common_chars_tab1->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\270\321\205 \320\261\321\203\320\272\320\262 \320\275\320\265\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 1", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\276\321\200\321\202\321\201\320\274\320\265\320\275\321\213", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = table_of_sportsmens_in->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        delete_sportsmen_tab2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276 \321\201\320\277\320\276\321\200\321\202\321\201\320\274\320\265\320\275\320\260", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \321\201\320\277\320\276\321\200\321\202\321\201\320\274\320\265\320\275\320\276\320\262", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        add_spotsmen_tab2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = table_of_sportsmens_out->headerItem();
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200\320\260 \321\201\320\277\321\200\320\276\321\202\321\201\320\274\320\265\320\275\320\276\320\262", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UNTITLEDVYUNUL_H
