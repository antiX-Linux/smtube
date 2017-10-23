/********************************************************************************
** Form generated from reading UI file 'playerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERDIALOG_H
#define UI_PLAYERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "filechooser.h"

QT_BEGIN_NAMESPACE

class Ui_PlayerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *name_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    FileChooser *binary_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *parms_edit;
    QCheckBox *streamingsites_check;
    QCheckBox *onlinetv_check;
    QHBoxLayout *horizontalLayout_5;
    QLabel *quality_label;
    QComboBox *quality_combo;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *media_combo;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PlayerDialog)
    {
        if (PlayerDialog->objectName().isEmpty())
            PlayerDialog->setObjectName(QStringLiteral("PlayerDialog"));
        PlayerDialog->resize(542, 311);
        verticalLayout = new QVBoxLayout(PlayerDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(PlayerDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        name_edit = new QLineEdit(PlayerDialog);
        name_edit->setObjectName(QStringLiteral("name_edit"));

        horizontalLayout->addWidget(name_edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(PlayerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        binary_edit = new FileChooser(PlayerDialog);
        binary_edit->setObjectName(QStringLiteral("binary_edit"));

        horizontalLayout_2->addWidget(binary_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(PlayerDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        parms_edit = new QLineEdit(PlayerDialog);
        parms_edit->setObjectName(QStringLiteral("parms_edit"));

        horizontalLayout_3->addWidget(parms_edit);


        verticalLayout->addLayout(horizontalLayout_3);

        streamingsites_check = new QCheckBox(PlayerDialog);
        streamingsites_check->setObjectName(QStringLiteral("streamingsites_check"));

        verticalLayout->addWidget(streamingsites_check);

        onlinetv_check = new QCheckBox(PlayerDialog);
        onlinetv_check->setObjectName(QStringLiteral("onlinetv_check"));

        verticalLayout->addWidget(onlinetv_check);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        quality_label = new QLabel(PlayerDialog);
        quality_label->setObjectName(QStringLiteral("quality_label"));

        horizontalLayout_5->addWidget(quality_label);

        quality_combo = new QComboBox(PlayerDialog);
        quality_combo->setObjectName(QStringLiteral("quality_combo"));

        horizontalLayout_5->addWidget(quality_combo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(PlayerDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        media_combo = new QComboBox(PlayerDialog);
        media_combo->setObjectName(QStringLiteral("media_combo"));

        horizontalLayout_4->addWidget(media_combo);

        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        line = new QFrame(PlayerDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(PlayerDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(name_edit);
        label_2->setBuddy(binary_edit);
        label_3->setBuddy(parms_edit);
        quality_label->setBuddy(quality_combo);
        label_4->setBuddy(media_combo);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(name_edit, binary_edit);
        QWidget::setTabOrder(binary_edit, parms_edit);
        QWidget::setTabOrder(parms_edit, streamingsites_check);
        QWidget::setTabOrder(streamingsites_check, onlinetv_check);
        QWidget::setTabOrder(onlinetv_check, quality_combo);
        QWidget::setTabOrder(quality_combo, media_combo);
        QWidget::setTabOrder(media_combo, buttonBox);

        retranslateUi(PlayerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PlayerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PlayerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PlayerDialog);
    } // setupUi

    void retranslateUi(QDialog *PlayerDialog)
    {
        PlayerDialog->setWindowTitle(QApplication::translate("PlayerDialog", "Edit Player", Q_NULLPTR));
        label->setText(QApplication::translate("PlayerDialog", "&Name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("PlayerDialog", "&Executable:", Q_NULLPTR));
        label_3->setText(QApplication::translate("PlayerDialog", "&Parameters:", Q_NULLPTR));
        streamingsites_check->setText(QApplication::translate("PlayerDialog", "This player supports &video sites", Q_NULLPTR));
        onlinetv_check->setText(QApplication::translate("PlayerDialog", "This player can play &online TV", Q_NULLPTR));
        quality_label->setText(QApplication::translate("PlayerDialog", "Preferred &quality:", Q_NULLPTR));
        label_4->setText(QApplication::translate("PlayerDialog", "Add to &menu:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlayerDialog: public Ui_PlayerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERDIALOG_H
