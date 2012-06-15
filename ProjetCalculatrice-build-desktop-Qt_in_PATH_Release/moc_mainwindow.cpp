/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri Jun 15 13:34:12 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ProjetCalculatrice/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      26,   11,   11,   11, 0x08,
      40,   11,   11,   11, 0x08,
      54,   11,   11,   11, 0x08,
      68,   11,   11,   11, 0x08,
      82,   11,   11,   11, 0x08,
      96,   11,   11,   11, 0x08,
     110,   11,   11,   11, 0x08,
     124,   11,   11,   11, 0x08,
     138,   11,   11,   11, 0x08,
     152,   11,   11,   11, 0x08,
     165,   11,   11,   11, 0x08,
     179,   11,   11,   11, 0x08,
     192,   11,   11,   11, 0x08,
     206,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,
     233,   11,   11,   11, 0x08,
     245,   11,   11,   11, 0x08,
     258,   11,   11,   11, 0x08,
     271,   11,   11,   11, 0x08,
     285,   11,   11,   11, 0x08,
     299,   11,   11,   11, 0x08,
     312,   11,   11,   11, 0x08,
     325,   11,   11,   11, 0x08,
     338,   11,   11,   11, 0x08,
     352,   11,   11,   11, 0x08,
     366,   11,   11,   11, 0x08,
     379,   11,   11,   11, 0x08,
     394,   11,   11,   11, 0x08,
     408,   11,   11,   11, 0x08,
     421,   11,   11,   11, 0x08,
     436,   11,   11,   11, 0x08,
     451,   11,   11,   11, 0x08,
     468,   11,   11,   11, 0x08,
     482,   11,   11,   11, 0x08,
     498,   11,   11,   11, 0x08,
     513,   11,   11,   11, 0x08,
     534,   11,   11,   11, 0x08,
     562,  556,   11,   11, 0x08,
     580,   11,   11,   11, 0x08,
     595,   11,   11,   11, 0x08,
     610,   11,   11,   11, 0x08,
     625,   11,   11,   11, 0x08,
     641,   11,   11,   11, 0x08,
     656,  556,   11,   11, 0x08,
     675,  556,   11,   11, 0x08,
     690,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0num0Pressed()\0num1Pressed()\0"
    "num2Pressed()\0num3Pressed()\0num4Pressed()\0"
    "num5Pressed()\0num6Pressed()\0num7Pressed()\0"
    "num8Pressed()\0num9Pressed()\0SINPressed()\0"
    "SINHPressed()\0COSPressed()\0COSHPressed()\0"
    "TANPressed()\0TANHPressed()\0LNPressed()\0"
    "LOGPressed()\0SQRPressed()\0SQRTPressed()\0"
    "CUBEPressed()\0INVPressed()\0POWPressed()\0"
    "MODPressed()\0SIGNPressed()\0FACTPressed()\0"
    "ADDPressed()\0MINUSPressed()\0MULTPressed()\0"
    "DIVPressed()\0spacePressed()\0ratioClicked()\0"
    "integerClicked()\0realClicked()\0"
    "radianClicked()\0degreClicked()\0"
    "trueComplexClicked()\0falseComplexClicked()\0"
    "index\0fermerOnglet(int)\0nouvelOnglet()\0"
    "pointPressed()\0slashPressed()\0"
    "dollarPressed()\0quotePressed()\0"
    "changerOnglet(int)\0refreshUI(int)\0"
    "evalPressed()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: num0Pressed(); break;
        case 1: num1Pressed(); break;
        case 2: num2Pressed(); break;
        case 3: num3Pressed(); break;
        case 4: num4Pressed(); break;
        case 5: num5Pressed(); break;
        case 6: num6Pressed(); break;
        case 7: num7Pressed(); break;
        case 8: num8Pressed(); break;
        case 9: num9Pressed(); break;
        case 10: SINPressed(); break;
        case 11: SINHPressed(); break;
        case 12: COSPressed(); break;
        case 13: COSHPressed(); break;
        case 14: TANPressed(); break;
        case 15: TANHPressed(); break;
        case 16: LNPressed(); break;
        case 17: LOGPressed(); break;
        case 18: SQRPressed(); break;
        case 19: SQRTPressed(); break;
        case 20: CUBEPressed(); break;
        case 21: INVPressed(); break;
        case 22: POWPressed(); break;
        case 23: MODPressed(); break;
        case 24: SIGNPressed(); break;
        case 25: FACTPressed(); break;
        case 26: ADDPressed(); break;
        case 27: MINUSPressed(); break;
        case 28: MULTPressed(); break;
        case 29: DIVPressed(); break;
        case 30: spacePressed(); break;
        case 31: ratioClicked(); break;
        case 32: integerClicked(); break;
        case 33: realClicked(); break;
        case 34: radianClicked(); break;
        case 35: degreClicked(); break;
        case 36: trueComplexClicked(); break;
        case 37: falseComplexClicked(); break;
        case 38: fermerOnglet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: nouvelOnglet(); break;
        case 40: pointPressed(); break;
        case 41: slashPressed(); break;
        case 42: dollarPressed(); break;
        case 43: quotePressed(); break;
        case 44: changerOnglet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: refreshUI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: evalPressed(); break;
        default: ;
        }
        _id -= 47;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
