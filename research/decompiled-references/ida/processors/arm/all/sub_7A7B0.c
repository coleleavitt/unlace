__int64 __fastcall sub_7A7B0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rcx
  char v8; // al
  char v9; // dl
  unsigned int v10; // eax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r14
  unsigned int v19; // ebx
  int v21; // eax
  __int64 v22; // [rsp+0h] [rbp-98h]
  __int64 v23; // [rsp+8h] [rbp-90h]
  int *v24; // [rsp+10h] [rbp-88h]
  unsigned __int64 v25; // [rsp+18h] [rbp-80h]
  unsigned __int64 v26; // [rsp+20h] [rbp-78h]
  _QWORD v27[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v28; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h]
  __int16 v30; // [rsp+50h] [rbp-48h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 8);
  v31 = __readfsqword(0x28u);
  v25 = a3;
  v26 = v6;
  if ( a3 >= v6 && (get_tinfo_property() & 0x3F) != 1 )
  {
    v19 = 0;
    v29 = 0x1000000000LL;
    v30 = 0;
    v28 = 0;
    if ( (unsigned int)sub_79430((unsigned int *)&v28, (_DWORD *)(a2 + 40), a2 + 32) != 1 )
      return v19;
    sub_7A320(a1, (int *)(a2 + 40), a2 + 32, -1);
  }
  v27[0] = 0;
  v8 = *(_BYTE *)(a2 + 88);
  v27[1] = 0;
  v9 = v8;
  v10 = v8 & 0xF0;
  if ( (v9 & 0xF0) == 0xC0 )
    v10 = *(_DWORD *)(a2 + 28);
  if ( v10 <= 0x10 )
    v10 = getinf(99);
  HIDWORD(v29) = v10;
  LODWORD(v29) = 0;
  v28 = 0;
  v30 = (v10 & 0xFFFFFFF0) == 64 || (v10 & 0xFFFFFFF0) == 208;
  v11 = *(_QWORD *)(a2 + 8);
  if ( !v11 )
    goto LABEL_20;
  v12 = 0;
  v13 = 0;
  v24 = (int *)v27;
  v14 = &v28;
  do
  {
    v15 = *(_QWORD *)a2 + 80 * v13;
    v16 = (int *)v15;
    v17 = *(_DWORD *)(v15 + 72) & 2;
    if ( a3 > v12 )
    {
      v16 = v24;
      if ( v25 >= v26 )
        v16 = (int *)v15;
      if ( (_DWORD)v17 )
      {
LABEL_17:
        v23 = v15;
        cleanup_argloc();
        *v16 = 3;
        v16[2] = 137;
        v18 = v23 + 64;
        goto LABEL_18;
      }
      v18 = v15 + 64;
      if ( !HIBYTE(v30) )
        goto LABEL_25;
    }
    else
    {
      HIBYTE(v30) = 1;
      if ( (_DWORD)v17 )
        goto LABEL_17;
      v18 = v15 + 64;
    }
    if ( *(_BYTE *)(v15 + 64) )
    {
      if ( !(unsigned __int8)getinf_flag(67, 16, v17, (__int64)v14, a5, a6, v22, v23, (__int64)v24) )
      {
LABEL_25:
        v21 = sub_79430((unsigned int *)&v28, v16, v18);
        if ( v21 )
        {
          if ( v21 != 1 )
            goto LABEL_14;
          goto LABEL_18;
        }
      }
      if ( !(unsigned __int8)sub_797E0((__int64)&v28, (__int64)v16) )
        goto LABEL_14;
      goto LABEL_18;
    }
    if ( *v16 != 1 || (unsigned __int8)sub_79310((int *)&v28, (__int64)v16, v16[2]) )
    {
LABEL_14:
      v19 = 0;
      goto LABEL_15;
    }
LABEL_18:
    sub_7A320(a1, v16, v18, -1);
    v13 = ++v12;
  }
  while ( (unsigned __int64)v12 < *(_QWORD *)(a2 + 8) );
  v11 = (int)((v29 + 7) & 0xFFFFFFF8);
LABEL_20:
  *(_QWORD *)(a2 + 56) = v11;
  v19 = 1;
LABEL_15:
  cleanup_argloc();
  return v19;
}
