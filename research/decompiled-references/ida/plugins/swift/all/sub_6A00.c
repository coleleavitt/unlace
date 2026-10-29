int sub_6A00()
{
  _BYTE *v0; // rbx
  char v2; // [rsp+6h] [rbp-19Ah] BYREF
  char v3; // [rsp+7h] [rbp-199h] BYREF
  _BYTE v4[24]; // [rsp+8h] [rbp-198h] BYREF
  __int64 v5; // [rsp+20h] [rbp-180h]
  char v6; // [rsp+28h] [rbp-178h]
  _BYTE v7[24]; // [rsp+30h] [rbp-170h] BYREF
  __int64 v8; // [rsp+48h] [rbp-158h]
  char v9; // [rsp+50h] [rbp-150h]
  _BYTE v10[24]; // [rsp+58h] [rbp-148h] BYREF
  __int64 v11; // [rsp+70h] [rbp-130h]
  char v12; // [rsp+78h] [rbp-128h]
  _BYTE v13[24]; // [rsp+80h] [rbp-120h] BYREF
  __int64 v14; // [rsp+98h] [rbp-108h]
  char v15; // [rsp+A0h] [rbp-100h]
  _BYTE v16[24]; // [rsp+A8h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-E0h]
  char v18; // [rsp+C8h] [rbp-D8h]
  _BYTE v19[24]; // [rsp+D0h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+E8h] [rbp-B8h]
  char v21; // [rsp+F0h] [rbp-B0h]
  _BYTE v22[24]; // [rsp+F8h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+110h] [rbp-90h]
  char v24; // [rsp+118h] [rbp-88h]
  _BYTE v25[24]; // [rsp+120h] [rbp-80h] BYREF
  __int64 v26; // [rsp+138h] [rbp-68h]
  char v27; // [rsp+140h] [rbp-60h]
  _BYTE v28[24]; // [rsp+148h] [rbp-58h] BYREF
  __int64 v29; // [rsp+160h] [rbp-40h]
  char v30; // [rsp+168h] [rbp-38h]
  unsigned __int64 v31; // [rsp+170h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  xmmword_28820 = 0;
  *(_QWORD *)&xmmword_28820 = "ClassDescriptor";
  qword_28830 = -1;
  sub_107D0(
    (char *)&xmmword_28820 + 8,
    "int Flags;__int32 Parent          __SROFF;__int32 Name            __SROFF;__int32 AccessFunction  __SROFF;__int32 Fi"
    "eldDescriptor __SROFF;__int32 SuperclassType  __SROFF;int MetadataNegativeSizeInWords;int MetadataPositiveSizeInWord"
    "s;int NumImmediateMembers;int NumFields;",
    &v3);
  qword_28840 = 0;
  qword_28838 = (__int64)"StructDescriptor";
  qword_28848 = -1;
  sub_107D0(
    &qword_28840,
    "int Flags;__int32 Parent          __SROFF;__int32 Name            __SROFF;__int32 AccessFunction  __SROFF;__int32 Fi"
    "eldDescriptor __SROFF;int NumFields;int FieldOffsetVectorOffset;",
    &v3);
  qword_28858 = 0;
  qword_28850 = (__int64)"EnumDescriptor";
  qword_28860 = -1;
  sub_107D0(
    &qword_28858,
    "int Flags;__int32 Parent          __SROFF;__int32 Name            __SROFF;__int32 AccessFunction  __SROFF;__int32 Fi"
    "eldDescriptor __SROFF;int NumPayloadCasesAndPayloadSizeOffset;int NumEmptyCases;",
    &v3);
  qword_28870 = 0;
  qword_28868 = (__int64)"ModuleDescriptor";
  qword_28878 = -1;
  sub_107D0(&qword_28870, "int Flags;__int32 Parent __SROFF;__int32 Name   __SROFF;", &v3);
  qword_28888 = 0;
  qword_28880 = (__int64)"ProtocolDescriptor";
  qword_28890 = -1;
  sub_107D0(
    &qword_28888,
    "int Flags;__int32 Parent              __SROFF;__int32 Name                __SROFF;int NumRequirementsInSignature;int"
    " NumRequirements;__int32 AssociatedTypeNames __SROFF;",
    &v3);
  qword_288A0 = 0;
  qword_28898 = (__int64)"AnonymousContextDescriptor";
  qword_288A8 = -1;
  sub_107D0(&qword_288A0, "int Flags;__int32 Parent __SROFF;", &v3);
  qword_288B8 = 0;
  qword_288B0 = (__int64)"FieldDescriptor";
  qword_288C0 = -1;
  sub_107D0(
    &qword_288B8,
    "__int32 MangledTypeName __SROFF;__int32 Superclass      __SROFF;FieldDescriptorKind Kind;__int16 FieldRecordSize;int NumFields;",
    &v3);
  qword_288D0 = 0;
  qword_288C8 = (__int64)"FieldRecord";
  qword_288D8 = -1;
  sub_107D0(&qword_288D0, "int Flags;__int32 MangledTypeName __SROFF;__int32 FieldName       __SROFF;", &v3);
  qword_288E8 = 0;
  qword_288E0 = (__int64)"ValueMetadata";
  qword_288F0 = -1;
  sub_107D0(&qword_288E8, "__int64 Kind      __enum(MetadataKind);void *Description __off;", &v3);
  qword_28900 = 0;
  qword_288F8 = (__int64)"ValueWitnessTable";
  qword_28908 = -1;
  sub_107D0(
    &qword_28900,
    "void *initializeBufferWithCopyOfBuffer __off;void *destroy                          __off;void *initializeWithCopy  "
    "             __off;void *assignWithCopy                   __off;void *initializeWithTake               __off;void *a"
    "ssignWithTake                   __off;void *getEnumTagSinglePayload          __off;void *storeEnumTagSinglePayload  "
    "      __off;__int64 size;__int64 stride;int flags;int extraInhabitantCount;",
    &v3);
  qword_28918 = 0;
  qword_28910 = (__int64)"Swift::String";
  qword_28920 = -1;
  sub_107D0(&qword_28918, "__int64 _countAndFlagsBits;void *_object __off;", &v3);
  qword_28930 = 0;
  qword_28928 = (__int64)"Swift::OpaquePointer";
  qword_28938 = -1;
  sub_107D0(&qword_28930, "void *_rawValue __off;", &v3);
  __cxa_atexit(func, nullptr, &off_274A0);
  xmmword_287E0 = 0;
  xmmword_287C0 = 0;
  *(_QWORD *)&xmmword_287E0 = 2;
  *(_QWORD *)&xmmword_287C0 = "FieldDescriptorKind";
  BYTE8(xmmword_287E0) = 96;
  xmmword_287D0 = 0;
  sub_13100((char *)&xmmword_287C0 + 8, &off_27600, 8, &v3);
  xmmword_28808 = 0;
  qword_28818 = 0;
  qword_287F0 = (__int64)"MetadataKind";
  *((_QWORD *)&xmmword_28808 + 1) = 4;
  *(_OWORD *)&xmmword_287F8 = 0;
  sub_13100(&xmmword_287F8, &off_274C0, 20, &v3);
  __cxa_atexit(sub_7B20, nullptr, &off_274A0);
  sub_B940(v4, "ytWV");
  v6 = 0;
  v5 = 0;
  sub_B940(v7, "Bi64_WV");
  v9 = 0;
  v8 = 0x300000008LL;
  sub_B940(v10, "Bi32_WV");
  v12 = 0;
  v11 = 0x200000004LL;
  sub_B940(v13, "Bi16_WV");
  v15 = 0;
  v14 = 0x100000002LL;
  sub_B940(v16, "Bi8_WV");
  v17 = 1;
  v18 = 0;
  sub_B940(v19, "BOWV");
  v20 = 0x300000008LL;
  v21 = 1;
  sub_B940(v22, "BoWV");
  v23 = 0x300000008LL;
  v24 = 1;
  sub_B940(v25, "BbWV");
  v0 = v28;
  v26 = 0x300000008LL;
  v27 = 1;
  sub_B940(v28, "BpWV");
  v29 = 0x300000008LL;
  v30 = 1;
  sub_1BDD0(&unk_28780, v4, 9, &v2, &v3);
  while ( 1 )
  {
    if ( *(_QWORD *)v0 )
    {
      *((_QWORD *)v0 + 1) = 0;
      qfree();
    }
    if ( v0 == v4 )
      break;
    v0 -= 40;
  }
  return __cxa_atexit(sub_8360, &unk_28780, &off_274A0);
}

