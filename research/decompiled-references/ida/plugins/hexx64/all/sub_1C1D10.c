__int64 __fastcall sub_1C1D10(__int64 a1, _QWORD *a2, __int64 a3, int a4, _DWORD *a5, _DWORD *a6, unsigned __int8 a7)
{
  void *v9; // r9
  unsigned __int8 v10; // dl
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // ebp
  int v15; // ebx
  int v17; // edx
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // r12
  int v21; // eax
  int v22; // esi
  unsigned int v23; // ecx
  __int64 (__fastcall *v25)(__int64, __int64, __int64, _QWORD, _QWORD, int *, int *); // [rsp+18h] [rbp-70h]
  unsigned __int8 v27; // [rsp+2Bh] [rbp-5Dh]
  int v28; // [rsp+2Ch] [rbp-5Ch]
  _DWORD *v29; // [rsp+30h] [rbp-58h]
  int v31; // [rsp+40h] [rbp-48h] BYREF
  int v32; // [rsp+44h] [rbp-44h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v9 = sub_1C2180;
  v33 = __readfsqword(0x28u);
  v10 = a7;
  if ( a7 )
  {
    v10 = *(_BYTE *)(a1 + 145);
    v9 = sub_1C52A0;
  }
  v11 = a2[1];
  v32 = 0;
  v31 = 0;
  if ( !v11 )
    return 0;
  v12 = 0;
  v13 = 0;
  v28 = 0;
  v15 = 0;
  v25 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, int *, int *))v9;
  v29 = a5;
  v27 = v10;
  do
  {
    v19 = v11 - v12 - 1;
    if ( v27 )
      v12 = v19;
    v20 = *a2 + 24 * v12;
    v21 = v25(a1, v20, a3, (unsigned int)a4, *(unsigned __int16 *)(v20 + 18), &v31, &v32);
    if ( !v21 )
      goto LABEL_11;
    v17 = *(unsigned __int16 *)(v20 + 16);
    v22 = v17 + v31;
    v31 += v17;
    if ( v13 )
    {
      if ( v27 )
        v17 = v28;
      if ( v22 != v17 )
        return (unsigned int)-1;
      v18 = v32;
      if ( v32 )
        return (unsigned int)-1;
    }
    else
    {
      if ( v29 )
        *v29 = v22;
      v18 = v32;
      if ( a6 )
        *a6 = v32;
    }
    v13 += v21;
    a4 = a4 - v21 + v18;
    a3 += v21 - v18;
    if ( a4 <= 0 )
      break;
    v28 = v22 + v21;
LABEL_11:
    ++v15;
    v11 = a2[1];
    v12 = v15;
  }
  while ( v15 < v11 );
  v23 = v13;
  if ( (v27 & (v29 != nullptr)) != 0 && v13 )
    *v29 = v31;
  return v23;
}

