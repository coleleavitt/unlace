__int64 __fastcall sub_B660(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  char v9; // r12
  int v10; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  const void *v15; // r14
  size_t v16; // rax
  size_t v17; // r12
  int *v18; // rbx
  int *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v23; // rbp
  unsigned __int8 (__fastcall *v24)(__int64, __int64, _QWORD); // rax
  __int64 v25; // rbp
  int v26; // eax
  size_t v27; // r15
  void *dest; // [rsp+Ah] [rbp-158h] BYREF
  __int128 v29; // [rsp+12h] [rbp-150h]
  __int64 v30; // [rsp+2Ah] [rbp-138h] BYREF
  __int128 v31; // [rsp+32h] [rbp-130h]
  __int64 v32; // [rsp+42h] [rbp-120h]
  int v33; // [rsp+4Ah] [rbp-118h]
  __int64 (__fastcall **v34)(); // [rsp+5Ah] [rbp-108h]
  __int64 v35; // [rsp+62h] [rbp-100h]
  __int128 v36; // [rsp+6Ah] [rbp-F8h]
  __int64 v37; // [rsp+7Ah] [rbp-E8h]
  const char *v38; // [rsp+82h] [rbp-E0h]
  int v39; // [rsp+8Ah] [rbp-D8h]
  __m128i v40; // [rsp+92h] [rbp-D0h]
  int v41; // [rsp+A2h] [rbp-C0h]
  _BYTE v42[96]; // [rsp+AAh] [rbp-B8h] BYREF
  int v43; // [rsp+10Ah] [rbp-58h] BYREF
  __int64 *v44; // [rsp+112h] [rbp-50h]
  unsigned __int64 v45; // [rsp+122h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 16);
  v45 = __readfsqword(0x28u);
  v33 = -1;
  v31 = 0;
  v30 = 0;
  v32 = 0;
  v9 = sub_B130(v3, (int)&v30);
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  if ( !v9 )
  {
    v13 = 1;
    sub_EC40((unsigned int)"Failed to determine Objective-C runtime version\n", (unsigned int)&v30, v5, v6, v7, v8);
    return v13;
  }
  dest = 0;
  v10 = *((_DWORD *)a2 + 2);
  v29 = 0;
  if ( v10 <= 28 )
  {
    if ( v10 > 26 )
    {
      v30 = -1;
      if ( (unsigned __int8)sub_A480(&v30, a2[11]) || (unsigned __int8)sub_A480(&v30, a2[12]) )
        sub_158D0(&dest, v30);
      v11 = v29;
LABEL_8:
      if ( v11 > 1 )
      {
LABEL_9:
        v12 = *(_QWORD *)(a1 + 16);
        v30 = 0;
        v31 = 0;
        sub_165F0(*(_QWORD *)(v12 + 1808), &v30, &dest, 0);
        if ( (_QWORD)v31 )
        {
          if ( (_QWORD)v31 == 1 )
          {
            callui(115);
          }
          else
          {
            v37 = 0;
            v35 = 0x3FF000004LL;
            v38 = "Please choose a method";
            v18 = &v43;
            v36 = -1;
            v19 = (int *)v42;
            v34 = (__int64 (__fastcall **)())&unk_3CA80;
            v39 = 2;
            v41 = -1;
            v40 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_3C0A8), (__m128i)(unsigned __int64)off_3BFD0);
            do
            {
              *(_QWORD *)v19 = 0;
              v19 += 6;
              *((_OWORD *)v19 - 1) = 0;
            }
            while ( &v43 != v19 );
            v43 = 0;
            if ( ((HIDWORD(v35) >> 19) & 0x3F) != 0 )
            {
              if ( BYTE3(v35) != 0xFF )
              {
                if ( !under_debugger )
                  interr();
                BUG();
              }
              BYTE3(v35) = ((HIDWORD(v35) >> 19) & 0x3F) - 1;
              HIDWORD(v35) &= 0xFE07FFFF;
            }
            v44 = &v30;
            v34 = off_3BD28;
            callui(16);
            v34 = (__int64 (__fastcall **)())&unk_3CA80;
            do
            {
              v20 = *((_QWORD *)v18 - 3);
              v18 -= 6;
              if ( v20 )
              {
                *((_QWORD *)v18 + 1) = 0;
                qfree();
              }
            }
            while ( v18 != (int *)v42 );
          }
        }
        else
        {
          sub_AE60();
        }
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree();
        }
        v13 = 0;
        goto LABEL_14;
      }
      goto LABEL_26;
    }
LABEL_21:
    sub_EC40((unsigned int)"Error: invalid widget type: %d\n", v10, v5, v6, v7, v8);
    goto LABEL_22;
  }
  if ( v10 != 46 )
    goto LABEL_21;
  if ( (unsigned int)callui(7) != 14598366 )
    goto LABEL_7;
  v21 = *a2;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
  v23 = hexdsp(438, v21);
  if ( !v23 )
    goto LABEL_7;
  v24 = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp();
  if ( !v24(584, v23, 0) || *(_DWORD *)(v23 + 80) != 1 )
    goto LABEL_7;
  v25 = *(_QWORD *)(v23 + 88);
  v26 = *(_DWORD *)(v25 + 8);
  if ( v26 != 63 )
  {
    if ( v26 == 64 )
    {
      v30 = 0;
      get_stock_tinfo();
      if ( (unsigned __int8)compare_tinfo() )
        sub_158D0(&dest, *(_QWORD *)(v25 + 24));
      clear_tinfo_t();
      v11 = v29;
      goto LABEL_8;
    }
LABEL_7:
    v11 = v29;
    goto LABEL_8;
  }
  v15 = *(const void **)(v25 + 24);
  if ( v15 )
  {
    v16 = strlen(*(const char **)(v25 + 24));
    v17 = v16;
    if ( v16 )
    {
      v27 = v16 + 1;
      if ( *((_QWORD *)&v29 + 1) < v16 + 1 )
        dest = (void *)qvector_reserve();
      *(_QWORD *)&v29 = v27;
      memmove(dest, v15, v17);
      *((_BYTE *)dest + v17) = 0;
      v11 = v29;
      goto LABEL_8;
    }
  }
  *(_QWORD *)&v29 = 0;
LABEL_26:
  if ( (unsigned int)sub_AF30() && (unsigned __int64)v29 > 1 )
    goto LABEL_9;
LABEL_22:
  v13 = 1;
LABEL_14:
  if ( dest )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  return v13;
}
