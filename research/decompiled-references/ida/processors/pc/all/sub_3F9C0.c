__int64 __fastcall sub_3F9C0(_QWORD *a1, int a2, __int64 (__fastcall *a3)(char *, __int64), __int64 a4)
{
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  unsigned int v8; // ebx
  __int64 v10; // rbx
  __int64 v11; // [rsp+0h] [rbp-158h] BYREF
  char v12; // [rsp+18h] [rbp-140h]
  __int64 v13; // [rsp+20h] [rbp-138h] BYREF
  int v14; // [rsp+28h] [rbp-130h] BYREF
  void *v15; // [rsp+30h] [rbp-128h]
  int *v16; // [rsp+38h] [rbp-120h]
  int *v17; // [rsp+40h] [rbp-118h]
  __int64 v18; // [rsp+48h] [rbp-110h]
  __int64 (__fastcall **v19)(); // [rsp+50h] [rbp-108h]
  __int64 v20; // [rsp+58h] [rbp-100h]
  __int64 v21; // [rsp+60h] [rbp-F8h]
  _QWORD *v22; // [rsp+68h] [rbp-F0h]
  _BYTE v23[128]; // [rsp+70h] [rbp-E8h]
  __int64 v24; // [rsp+F0h] [rbp-68h]
  char v25; // [rsp+108h] [rbp-50h]
  unsigned __int64 v26; // [rsp+118h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v22 = a1;
  v16 = &v14;
  v17 = &v14;
  v14 = 0;
  v15 = 0;
  v18 = 0;
  v19 = off_16C360;
  v20 = 0;
  v21 = -1;
  v6 = 0;
  v24 = *(_QWORD *)(a3("RIP", a4) + 8);
  do
  {
    *(_QWORD *)&v23[v6 * 8] = *(_QWORD *)(a3(off_16C400[v6], a4) + 8);
    ++v6;
  }
  while ( v6 != 16 );
  v7 = v22;
  v25 = 0;
  if ( *v22 )
  {
    v22[1] = 0;
    qfree();
    *v7 = 0;
    v7[2] = 0;
  }
  sub_3F590(&v11, &v13);
  if ( v12 )
  {
    v10 = v11;
    sub_3BA80();
    a1[1] = 0;
    if ( v10 )
      qfree();
    goto LABEL_9;
  }
  v8 = (unsigned __int8)v11;
  if ( !(_BYTE)v11 )
  {
    a1[1] = 0;
LABEL_9:
    v8 = 0;
  }
  sub_3BF30(v15);
  return v8;
}
