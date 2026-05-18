unsigned __int64 __fastcall sub_F5250(_DWORD *a1, __int64 a2, __int64 *a3, double a4, __int64 a5, int a6, int a7)
{
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  unsigned __int8 v12; // al
  __int64 v13; // rbp
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  int v19; // r14d
  __int64 v20; // rax
  int v21; // ebp
  __int64 *v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  int v29; // esi
  int v30; // eax
  unsigned __int64 v32; // rax
  double v33; // xmm0_8
  unsigned int v34; // r12d
  unsigned __int8 *v35; // r8
  unsigned __int8 *v36; // rax
  int v37; // esi
  unsigned __int8 v38; // cl
  __int64 v39; // rdi
  __int64 v40; // rax
  double v42; // [rsp+18h] [rbp-60h] BYREF
  __int64 v43; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int8 *v44; // [rsp+28h] [rbp-50h]
  int v45; // [rsp+30h] [rbp-48h]
  int v46; // [rsp+34h] [rbp-44h]
  int v47; // [rsp+38h] [rbp-40h]
  __int16 v48; // [rsp+3Ch] [rbp-3Ch]
  unsigned __int64 v49; // [rsp+48h] [rbp-30h]

  v8 = *a3;
  v49 = __readfsqword(0x28u);
  v9 = *(_QWORD *)a1;
  v44 = nullptr;
  v45 = 0;
  v10 = *(_QWORD *)(v9 + 24);
  v47 = 0;
  v11 = *(_DWORD *)(v10 + 136);
  v43 = v10;
  v46 = v11;
  v48 = 0;
  v12 = byte_1BAD40[*(_WORD *)(v8 + 20) & 0x3F];
  if ( v12 == 2 )
  {
    sub_CD1F0(v8);
    sub_DBBA0((__int64)&v43, "%!.15g");
    v21 = v47;
    if ( !v47 )
      goto LABEL_7;
    v44[v47] = 0;
    if ( v44 )
    {
      v42 = 0.0;
      v33 = 0.0;
      if ( v47 )
      {
        sub_CAFA0(v44, &v42, v47, 1u);
        v33 = v42;
      }
      if ( a4 != v33 )
      {
        sub_C92E0((__int64)&v43);
        sub_DBBA0((__int64)&v43, "%!.20e", a4, a4);
        v21 = v47;
        goto LABEL_7;
      }
    }
LABEL_18:
    v21 = v47;
    goto LABEL_7;
  }
  if ( v12 <= 2u )
  {
    if ( v12 == 1 )
    {
      v32 = sub_CD0F0((char **)v8);
      sub_DBBA0((__int64)&v43, "%lld", v32);
      v21 = v47;
      goto LABEL_7;
    }
    goto LABEL_17;
  }
  if ( v12 == 3 )
  {
    v20 = sub_D9DB0(v8, 1u, a4, (__int64)byte_1BAD40, 0, a6, a7);
    sub_DBBA0((__int64)&v43, "%Q", v20);
    v21 = v47;
    goto LABEL_7;
  }
  if ( v12 != 4 )
  {
LABEL_17:
    sub_DFD90((__int64)&v43, "NULL", 4);
    goto LABEL_18;
  }
  v13 = sub_EDD90(v8, a4, a2, (__int64)byte_1BAD40, 0, a6, a7);
  v18 = sub_D9CE0(v8, 1u, a4, v14, v15, v16, v17);
  v19 = v18;
  v34 = 2 * v18 + 4;
  sub_DFB20((__int64)&v43, v34);
  if ( (_BYTE)v48 )
    goto LABEL_18;
  v35 = v44;
  if ( v19 > 0 )
  {
    v36 = (unsigned __int8 *)v13;
    v37 = 0;
    do
    {
      v38 = *v36;
      v39 = v37;
      ++v36;
      v37 += 2;
      v35[v39 + 2] = a0123456789abcd_0[v38 >> 4];
      v35[v39 + 3] = a0123456789abcd_0[*(v36 - 1) & 0xF];
    }
    while ( (unsigned __int8 *)(v13 + (unsigned int)(v19 - 1) + 1) != v36 );
  }
  v21 = v34 - 1;
  v40 = (int)(v34 - 4);
  v35[v40 + 2] = 39;
  v35[v40 + 3] = 0;
  *(_WORD *)v35 = 10072;
  v47 = v34 - 1;
LABEL_7:
  v22 = sub_DC130((__int64)&v43);
  sub_F48B0((__int64)a1, v22, v21, 1u, sub_D42A0, v23);
  if ( (_BYTE)v48 )
  {
    v28 = *(_QWORD *)a1;
    if ( (*(_WORD *)(*(_QWORD *)a1 + 20LL) & 0x9000) != 0 )
      sub_C93F0(v28, (__int64)v22, v24, v25, v26, v27);
    else
      *(_WORD *)(v28 + 20) = 1;
    v29 = (unsigned __int8)v48;
    v30 = -1;
    if ( (_BYTE)v48 )
      v30 = (unsigned __int8)v48;
    a1[9] = v30;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 20LL) & 1) != 0 )
      sub_F4FB0((__int64)a1, v29);
  }
  return __readfsqword(0x28u) ^ v49;
}
