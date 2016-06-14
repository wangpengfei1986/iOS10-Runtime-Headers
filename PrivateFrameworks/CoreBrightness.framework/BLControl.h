/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BLControl : NSObject {
    bool  AABEnabled;
    id /* block */  _callback;
    void * _callbackContext;
    id /* block */  _ecoModeNotificationHandler;
    int  _ecoModeNotificationToken;
    id /* block */  _ecoModePreferencesUpdateNotificationHandler;
    int  _ecoModePreferencesUpdateNotificationToken;
    NightModeControl * _nightModeControl;
    bool  _useMultiCurves;
    struct AABC {} * aab;
    bool  aabExist;
    struct __IOHIDServiceClient {} * alsClient;
    unsigned int  alsCount;
    unsigned int  alsNode;
    unsigned int  alsOrientation;
    unsigned int  backlight;
    struct __Display {} * display;
    unsigned int  displayCount;
    unsigned int  driverNode;
    struct __IOHIDEventSystemClient { } * hidSystemClient;
    bool  ignoreALSEvents;
    bool  ignoreBrightnessKey;
    struct LegacyBacklightC { int (**x1)(); unsigned int x2; struct __Display {} *x3; unsigned int x4; int x5; struct __IOHIDServiceClient {} *x6; float x7; struct _ALS_Struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; int x_8_1_5; float x_8_1_6; float x_8_1_7; float x_8_1_8; float x_8_1_9; id x_8_1_10; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x_8_1_11; void*x_8_1_12; unsigned int x_8_1_13; bool x_8_1_14; bool x_8_1_15; float x_8_1_16; float x_8_1_17; float x_8_1_18; } x8; struct { int x_9_1_1; unsigned char x_9_1_2; float x_9_1_3; unsigned int x_9_1_4; id x_9_1_5; struct { unsigned char x_6_2_1; float x_6_2_2; id x_6_2_3; } x_9_1_6; struct __CFDictionary {} *x_9_1_7; float x_9_1_8; int (*x_9_1_9)(); void *x_9_1_10; } x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; union x39; void*x40; in void*x41; out void*x42; in void*x43; void*x44; void*x45; void*x46; void*x47; out void*x48; void*x49; void*x50; int x51; void*x52; BOOL x53; void*x54; void*x55; void*x56; void*x57; void*x58; const void*x59; void*x60; void*x61; void*x62; void*x63; double x64; void*x65; out void*x66; in void*x67; long x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; const void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; int x83; void*x84; in void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; unsigned int x92; void*x93; unsigned char x94; void*x95; out void*x96; long x97; void*x98; out void*x99; const void*x100; void*x101; void*x102; char *x103; void*x104; void*x105; void*x106; void*x107; void*x108; unsigned int x109/* : ? */; void*x110; long x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; double x121; void*x122; void*x123; void*x124; const void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; unsigned char x134; void*x135; out void*x136; long x137; void*x138; out void*x139; const void*x140; unsigned short x141; void*x142; void*x143; void*x144; long x145; void*x146; void*x147; void*x148; BOOL x149; void*x150; void*x151; void*x152; void*x153; void*x154; double x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; short x171; void*x172; long doublex173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; union x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; Class x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; BOOL x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; union x341; void*x342; in void*x343; out void*x344; in void*x345; void*x346; void*x347; void*x348; void*x349; out void*x350; void*x351; void*x352; int x353; void*x354; BOOL x355; void*x356; void*x357; void*x358; void*x359; void*x360; const void*x361; void*x362; void*x363; void*x364; void*x365; double x366; void*x367; out void*x368; in void*x369; long x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; const void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; int x385; void*x386; in void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; unsigned int x394; void*x395; unsigned char x396; void*x397; out void*x398; long x399; void*x400; out void*x401; const void*x402; void*x403; void*x404; char *x405; void*x406; void*x407; void*x408; void*x409; void*x410; unsigned int x411/* : ? */; void*x412; long x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; double x423; void*x424; void*x425; void*x426; const void*x427; void*x428; void*x429; void*x430; void*x431; void*x432; void*x433; void*x434; void*x435; unsigned char x436; void*x437; out void*x438; long x439; void*x440; out void*x441; const void*x442; void*x443; void*x444; void*x445; void*x446; void*x447; void*x448; long doublex449; void*x450; int x451; void*x452; short x453; void*x454; void*x455; void*x456; unsigned int x457/* : ? */; void*x458; long x459; void*x460; void*x461; void*x462; double x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; long long x474; void*x475; void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; union { short x_484_1_1; void*x_484_1_2; const void*x_484_1_3; BOOL x_484_1_4; void*x_484_1_5; void*x_484_1_6; unsigned char x_484_1_7; void*x_484_1_8; void*x_484_1_9; void*x_484_1_10; BOOL x_484_1_11; void*x_484_1_12; void*x_484_1_13; struct  struct CGPoint { double x_1_1_1; double x_1_1_2;  {} x_484_1_14; void*x_484_1_15; void*x_484_1_16; void*x_484_1_17; void*x_484_1_18; void*x_484_1_19; short x_484_1_20; void*x_484_1_21; const void*x_484_1_22; BOOL x_484_1_23; void*x_484_1_24; void*x_484_1_25; unsigned char x_484_1_26; void*x_484_1_27; unsigned short x_484_1_28; int x_484_1_29; void*x_484_1_30; void*x_484_1_31; void*x_484_1_32; struct  double x_2_1_1; double x_2_1_2;  {} x_484_1_33; void*x_484_1_34; void*x_484_1_35; void*x_484_1_36; void*x_484_1_37; void*x_484_1_38; void*x_484_1_39; } x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; id x506; void*x507; void*x508; void*x509; void*x510; void*x511; void*x512; out const BOOL x513; void*x514; void*x515; out void*x516; BOOL x517; void*x518; unsigned char x519; out in void*x520; const out long x521; long x522; void*x523; const SEL x524; union { int x_525_1_1; double x_525_1_2; } x525; void*x526; const void*x527; void*x528; void*x529; int x530; BOOL x531; out in unsigned int x532; void*x533; void*x534; void*x535; void*x536; unsigned char x537; out const in void*x538; const void*x539; void*x540; double x541; int x542; void*x543; short x544; void*x545; out const void*x546; void*x547; short x548; void*x549; void*x550; const void*x551; void*x552; void*x553; BOOL x554; out void*x555; in int x556; void*x557; void*x558; const SEL x559; union { int x_560_1_1; double x_560_1_2; } x560; void*x561; const void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; unsigned int x571/* : ? */; void*x572; long x573; void*x574; void*x575; void*x576; unsigned char x577; void*x578; void*x579; void*x580; long x581; void*x582; long x583; void*x584; long doublex585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; int x593; void*x594; long x595; void*x596; unsigned long x597; void*x598; void*x599; void*x600; unsigned int x601/* : ? */; void*x602; void*x603; void*x604; long x605; void*x606; unsigned char x607; void*x608; out void*x609; long x610; void*x611; out void*x612; const void*x613; void*x614; void*x615; } * legacyAutoBacklight;
    bool  monitorALSOnly;
    struct __IOHIDServiceClient {} * otherClients;
    unsigned int  otherClientsCount;
    bool  overrideIgnoreBrightness;
    NSObject<OS_dispatch_queue> * queue;
    NSObject<OS_dispatch_queue> * rootQueue;
    bool  useRootQueue;
}

- (void)callBlockWithProperty:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void*)copyBLControlPropertyWithkey:(struct __CFString { }*)arg1;
- (void*)copyPropertyWithKey:(struct __CFString { }*)arg1 client:(struct __CFNumber { }*)arg2;
- (struct __CFDictionary { }*)createDictWithUsagePairPage:(unsigned int)arg1 usage:(unsigned int)arg2;
- (bool)findAlsNodes;
- (bool)findBacklight;
- (bool)findHIDClients;
- (id)init;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (int)rootQueuePthreadAttrInit:(struct _opaque_pthread_attr_t { long long x1; BOOL x2[56]; }*)arg1;
- (bool)setBLControlPropertyWithKey:(struct __CFString { }*)arg1 property:(void*)arg2;
- (bool)setPropertyWithKey:(struct __CFString { }*)arg1 property:(void*)arg2 client:(struct __CFNumber { }*)arg3;
- (bool)start;
- (void)stop;

@end