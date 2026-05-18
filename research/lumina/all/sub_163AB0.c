__int64 __fastcall sub_163AB0(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 *a6, __int64 **a7)
{
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rdx
  int v10; // eax
  char v11; // al
  char v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  const char *v23; // rax
  _QWORD v27[3]; // [rsp+20h] [rbp-128h] BYREF
  int v28; // [rsp+38h] [rbp-110h]
  __int16 v29; // [rsp+3Ch] [rbp-10Ch]
  _BYTE v30[200]; // [rsp+40h] [rbp-108h] BYREF
  unsigned __int64 v31; // [rsp+108h] [rbp-40h]

  v7 = 0;
  v31 = __readfsqword(0x28u);
  v27[1] = v30;
  v27[0] = 0;
  v27[2] = 200;
  v28 = 0;
  v29 = 0;
  sub_DFDD0((__int64)v27, "CREATE TABLE x");
  v8 = *(unsigned __int8 *)(a2 + 10);
  v9 = 40;
  if ( *(_BYTE *)(a2 + 11) )
  {
    do
    {
      v10 = v8 + v7++;
      sub_DBBA0((__int64)v27, "%c\"%s\"", v9, (const char *)*(&off_23B280 + v10));
      v9 = 44;
    }
    while ( *(unsigned __int8 *)(a2 + 11) > v7 );
  }
  else
  {
    LOBYTE(v7) = 1;
    sub_DBBA0((__int64)v27, "(\"%s\"", *(const char **)a2);
  }
  v11 = *(_BYTE *)(a2 + 9);
  v12 = 0;
  if ( (v11 & 0x20) != 0 )
  {
    v12 = 1;
    sub_DFDD0((__int64)v27, ",arg HIDDEN");
    v11 = *(_BYTE *)(a2 + 9);
  }
  if ( (v11 & 0xC0) != 0 )
  {
    ++v12;
    sub_DFDD0((__int64)v27, ",schema HIDDEN");
  }
  sub_DFD90((__int64)v27, ")", 1);
  sub_DC130((__int64)v27);
  v19 = sub_15F8D0(a1, (__int64)v30, v13, v14, v15, v16);
  if ( v19 )
  {
    v23 = sub_EEFB0(a1, (__int64)v30, v17, a3, v18, v20, v21);
    *a7 = sub_105970("%s", v23);
    v22 = 0;
  }
  else
  {
    v19 = sub_FEBD0(a1, (__int64)v30);
    if ( v19 )
    {
      v19 = 7;
      v22 = 0;
    }
    else
    {
      v22 = sub_D1E10(48, (__int64)v30);
      if ( v22 )
      {
        *(_OWORD *)(v22 + 32) = 0;
        *(_QWORD *)(v22 + 32) = a2;
        *(_BYTE *)(v22 + 41) = v7;
        *(_OWORD *)(v22 + 16) = 0;
        *(_OWORD *)v22 = 0;
        *(_QWORD *)(v22 + 24) = a1;
        *(_BYTE *)(v22 + 40) = v12;
      }
      else
      {
        v19 = 7;
      }
    }
  }
  *a6 = v22;
  return v19;
}
