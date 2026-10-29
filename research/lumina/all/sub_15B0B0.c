__int64 __fastcall sub_15B0B0(__int64 a1, _QWORD *a2, int a3, char a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v6; // r15
  __int64 v11; // rcx
  char v12; // bp
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  char v22; // cl
  unsigned int v23; // r12d
  unsigned int v24; // r13d
  __int64 v25; // rdi
  unsigned __int64 v27; // r9
  unsigned __int8 v28; // cl
  unsigned __int8 *v29; // rsi
  int v30; // edi
  _BYTE *v31; // rdx
  _BYTE *v32; // r8
  unsigned __int8 v33; // al
  int v34; // ecx
  unsigned __int8 *v35; // rdx
  unsigned __int8 v36; // al
  unsigned __int8 *v37; // rsi
  _QWORD *v39; // [rsp+8h] [rbp-50h]
  _QWORD v40[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a2;
  *a5 = 0;
  v40[1] = __readfsqword(0x28u);
  v40[0] = 0;
  v12 = (a2 == nullptr) | ((unsigned int)sub_EA7B0(a1) == 0);
  if ( v12 )
  {
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      (unsigned int)&loc_20FE8,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 21;
  }
  if ( a3 >= 0 )
  {
    v15 = 0;
    if ( a3 )
    {
      do
      {
        v11 = v15;
        if ( !*((_BYTE *)a2 + v15) && !*((_BYTE *)a2 + v15 + 1) )
          break;
        v15 += 2;
      }
      while ( a3 > v15 );
      a3 = v15;
    }
  }
  v16 = *(_QWORD *)(a1 + 24);
  if ( v16 )
    xmmword_241500(v16);
  v21 = sub_F79F0(a1, a2, a3, v11, v13, v14);
  if ( !v21 )
  {
    v23 = 0;
    goto LABEL_13;
  }
  v22 = a4;
  v39 = (_QWORD *)v21;
  v23 = sub_157230(a1, v21, -1, v22, 0, a5, v40);
  v12 = v23 != 0;
  if ( !v40[0] || !a6 )
    goto LABEL_12;
  v27 = -1;
  v28 = *(_BYTE *)v39;
  v29 = (unsigned __int8 *)a2 + 1;
  if ( LODWORD(v40[0]) - (int)v39 >= 0 )
    v27 = (unsigned __int64)v39 + LODWORD(v40[0]) - (int)v39;
  if ( (unsigned __int64)v39 >= v27 || (v30 = 0, v31 = v39, !v28) )
  {
LABEL_43:
    LODWORD(v35) = (_DWORD)v6 + 1;
    goto LABEL_39;
  }
  do
  {
    v32 = v31 + 1;
    v33 = v31[1];
    if ( v28 <= 0xBFu || (v33 & 0xC0) != 0x80 )
    {
      ++v31;
      ++v30;
      v28 = v33;
      if ( v27 <= (unsigned __int64)v32 )
        break;
      continue;
    }
    ++v31;
    do
      v28 = *++v31;
    while ( (*v31 & 0xC0) == 0x80 );
    ++v30;
    if ( v27 <= (unsigned __int64)v31 )
      break;
  }
  while ( v28 );
  if ( v30 <= 0 )
    goto LABEL_43;
  v34 = 0;
  while ( 1 )
  {
    v35 = v29 + 2;
    if ( (unsigned int)*v29 - 216 <= 3 )
    {
      v36 = v29[2];
      v37 = v29 + 4;
      if ( (unsigned __int8)(v36 + 36) < 4u )
        v35 = v37;
    }
    if ( ++v34 == v30 )
      break;
    v29 = v35;
  }
LABEL_39:
  *a6 = (char *)v6 + (int)v35 - (int)v6 - 1;
LABEL_12:
  a2 = v39;
  sub_C9250(a1, v39);
LABEL_13:
  if ( *(_BYTE *)(a1 + 103) || (v24 = 0, v12) )
  {
    a2 = (_QWORD *)v23;
    v24 = sub_D42C0(a1, v23, v17, v18, v19, v20);
  }
  v25 = *(_QWORD *)(a1 + 24);
  if ( v25 )
    xmmword_241510(v25, a2, v17);
  return v24;
}
