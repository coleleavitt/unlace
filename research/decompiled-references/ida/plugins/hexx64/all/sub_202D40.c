__int64 __fastcall sub_202D40(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  unsigned int v5; // eax
  char v7; // al
  __int64 v8; // rdx
  int v9; // eax
  int v10; // r15d
  __int64 v11; // r14
  char v12; // al
  __int64 v13; // rdi
  int v14; // r12d
  __int64 v15; // rbx
  unsigned int v16; // ebx
  _QWORD *v18; // rdi
  int v19; // eax
  _DWORD *v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // xmm1_8
  int v23; // eax
  __int64 v24; // [rsp+18h] [rbp-F8h]
  char v25; // [rsp+23h] [rbp-EDh]
  unsigned int v26; // [rsp+24h] [rbp-ECh]
  __int64 v28; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-C0h] BYREF
  char v33; // [rsp+58h] [rbp-B8h]
  int v34; // [rsp+5Ch] [rbp-B4h]
  _QWORD v35[2]; // [rsp+60h] [rbp-B0h] BYREF
  _QWORD v36[2]; // [rsp+70h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+80h] [rbp-90h]
  int v38; // [rsp+88h] [rbp-88h]
  __int64 v39; // [rsp+90h] [rbp-80h]
  __int128 v40; // [rsp+98h] [rbp-78h]
  __int64 v41; // [rsp+A8h] [rbp-68h]
  __int128 v42; // [rsp+B0h] [rbp-60h]
  __int64 v43; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v44; // [rsp+C8h] [rbp-48h]
  __int64 v45; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v46; // [rsp+D8h] [rbp-38h]

  v5 = *(_DWORD *)(a2 + 72);
  v46 = __readfsqword(0x28u);
  v26 = v5;
  v7 = *(_BYTE *)(a3 + 32);
  if ( v7 == 1 )
  {
    v8 = *(int *)(a3 + 24);
  }
  else
  {
    if ( v7 != 5 )
      sub_201340(a4);
    v8 = *(_QWORD *)(a3 + 24);
  }
  v33 = v7;
  v9 = *(_DWORD *)(a3 + 40);
  v32 = v8;
  v34 = v9;
  v28 = 0;
  v29 = 0;
  v24 = sub_2024F0(a2, a3, &v28, &v29, a4, a5);
  v10 = (*(_BYTE *)(a3 + 48) & 8) == 0 ? 4 : 6;
  if ( (_BYTE)v28 )
    LOWORD(v10) = v10 | 0x20;
  if ( v33 == 5 )
  {
    LOWORD(v10) = ((unsigned __int8)sub_1F0A50(&v32, *(_QWORD *)(a1 + 56), 1, v24, a4) << 7) | v10;
  }
  else if ( (*(_BYTE *)(a3 + 48) & 1) != 0 )
  {
    if ( v33 != 1 )
      sub_201320(a4);
    LODWORD(v35[0]) = v32;
    LODWORD(v36[0]) = v34;
    sub_1F0840(*(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL), (int *)v35, (int *)v36, a4);
    v33 = 1;
    v32 = SLODWORD(v35[0]);
    v34 = v36[0];
  }
  v11 = v29;
  if ( v29 )
  {
    v12 = sub_1C3110(*(_QWORD *)(v29 + 8), 0, 0, a4);
    v13 = *(_QWORD *)(a1 + 56);
    if ( v12 )
    {
      if ( v26 )
      {
        v25 = *(_BYTE *)v13 & 1;
        if ( !v25 )
        {
LABEL_35:
          if ( v33 != 5 )
            goto LABEL_14;
          if ( v25 )
            goto LABEL_14;
          v20 = *(_DWORD **)a3;
          v21 = *(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8);
          if ( *(_QWORD *)a3 == v21 )
            goto LABEL_14;
          while ( *(_DWORD *)(v13 + 64) - 1 != *v20 )
          {
            if ( (_DWORD *)v21 == ++v20 )
              goto LABEL_14;
          }
          if ( v20 == (_DWORD *)v21 )
            goto LABEL_14;
          v30 = -1;
          v31 = 0;
          if ( !(unsigned __int8)sub_22D230(v13, &v30, nullptr, (__int64)&v31) || v32 != v30 || v34 != get_tinfo_size() )
          {
            clear_tinfo_t();
            v13 = *(_QWORD *)(a1 + 56);
            goto LABEL_14;
          }
          v35[0] = 0;
          v35[1] = 0;
          sub_32F770(&v32, v35, v34);
          LODWORD(v36[0]) = 0;
          v22 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(v26)).m128i_u64[0];
          copy_argloc();
          a4 = 0.0;
          v39 = 0;
          v37 = v24;
          v38 = 1;
          v41 = 0;
          v43 = 0;
          v40 = 0;
          v42 = 0;
          copy_tinfo_t();
          v23 = v38;
          v44 = v22;
          v45 = 0;
          BYTE1(v23) = BYTE1(v38) & 0x7E;
          v38 = v23 | 0x100000;
          v14 = sub_1F6560(*(_QWORD *)(a1 + 56), (__int64)v36, 0, 0.0);
          sub_83E20(v36);
          cleanup_argloc();
          clear_tinfo_t();
          if ( v14 == -1 )
          {
            v13 = *(_QWORD *)(a1 + 56);
            goto LABEL_14;
          }
          goto LABEL_18;
        }
      }
      v25 = 0;
    }
    else if ( v26 )
    {
      v25 = *(_BYTE *)v13 & 1;
      if ( !v25 )
      {
LABEL_14:
        v14 = sub_1F6FD0((_QWORD *)v13, v11, v26, v24, v10, (_BYTE *)(a1 + 48), a4);
        goto LABEL_18;
      }
    }
    else
    {
      v25 = 1;
    }
    LODWORD(v36[0]) = 0;
    copy_argloc();
    v37 = v24;
    v14 = sub_1F0540((__int64 *)(v13 + 432), (__int64)v36, a4);
    cleanup_argloc();
    if ( v14 != -1 )
      goto LABEL_18;
    v13 = *(_QWORD *)(a1 + 56);
    goto LABEL_35;
  }
  v18 = *(_QWORD **)(a1 + 56);
  if ( !v26 || (*(_BYTE *)v18 & 1) != 0 )
  {
    v14 = sub_1F06E0(v18 + 54, &v32, v24);
    if ( v14 != -1 )
      goto LABEL_18;
    v18 = *(_QWORD **)(a1 + 56);
  }
  if ( v33 == 1 )
  {
    v19 = sub_1F6B00(v18, v32, v34, &v28, v26, v24, a4, v10);
  }
  else
  {
    if ( v33 != 5 )
      sub_201340(a4);
    v19 = sub_232C90((__int64)v18, v32, v34, (__int64)&v28, v26, v24, v10, (_BYTE *)(a1 + 48));
  }
  v14 = v19;
LABEL_18:
  if ( *(_BYTE *)(a1 + 48) )
  {
    v16 = -36;
  }
  else
  {
    v15 = **(_QWORD **)(a1 + 64) + 104LL * v14;
    if ( !(unsigned __int8)sub_1C3110(v15, 0, 0, a4) )
      *(_DWORD *)(v15 + 24) |= 0x2000000u;
    v16 = 0;
    *(_DWORD *)(a1 + 44) = v14;
  }
  clear_tinfo_t();
  return v16;
}

