unsigned __int64 __fastcall sub_91280(__int64 a1, void (__fastcall ***a2)(__int64 a1, __int64 a2, __int64 *a3, int a4))
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 i; // r14
  __int64 v13; // rbx
  unsigned int v14; // r13d
  void (__fastcall *v15)(__int64, __int64, __int64 *, int); // rax
  __int64 v17; // r13
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, __int64, __int64 *, int); // rax
  __int64 v20; // r12
  __int64 v21; // rbx
  void (__fastcall *v22)(__int64, __int64, __int64 *, int); // rax
  __int64 v23; // r13
  __int64 v24; // r12
  __m128i v25; // [rsp+10h] [rbp-118h] BYREF
  __int64 v26; // [rsp+20h] [rbp-108h] BYREF
  __int128 v27; // [rsp+28h] [rbp-100h]
  int v28; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v29; // [rsp+80h] [rbp-A8h]
  unsigned int v30; // [rsp+84h] [rbp-A4h]
  unsigned int v31; // [rsp+88h] [rbp-A0h]
  unsigned int v32; // [rsp+8Ch] [rbp-9Ch]
  _BYTE v33[88]; // [rsp+90h] [rbp-98h] BYREF
  unsigned __int64 v34; // [rsp+E8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( (unsigned __int8)qgetenv("IDA_NORELOC", 0) )
    return v34 - __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 176);
  v5 = *(_QWORD *)(a1 + 224);
  v6 = 72LL * *(_QWORD *)(a1 + 232);
  v7 = v6;
  v8 = v5 + v6;
  v9 = *(_DWORD *)(a1 + 188) & 0x20;
  if ( (unsigned int)(v4 - 7) > 1 && v4 != 2 )
  {
    v10 = (v9 >> 5) & 1;
    goto LABEL_5;
  }
  if ( !v9 )
  {
    LOBYTE(v10) = *(_DWORD *)(a1 + 168) == 16777223;
LABEL_5:
    if ( v5 == v8 )
    {
LABEL_11:
      v7 = 0;
      goto LABEL_12;
    }
    if ( !(_BYTE)v10 )
      goto LABEL_26;
    goto LABEL_7;
  }
  if ( v6 )
  {
LABEL_7:
    if ( (~*(_BYTE *)(v5 + 60) & 3) != 0 )
    {
      v11 = v5 + 72;
      do
      {
        v5 = v11;
        if ( v11 == v8 )
          goto LABEL_11;
        v11 += 72;
      }
      while ( (~(unsigned __int8)*(_DWORD *)(v5 + 60) & 3) != 0 );
    }
LABEL_26:
    v7 = *(_QWORD *)(v5 + 24);
  }
LABEL_12:
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_C92E0, (__m128i)(unsigned __int64)&v28);
  if ( (unsigned __int8)sub_8E7C0(a1, (__int64 (***)())&v25) && v28 )
  {
    if ( v30 && v29 && (unsigned __int8)sub_8CCD0(a1, v29, v30, &v26, (__int64)"Number of dynamic external relocs") )
    {
      v22 = **a2;
      if ( v22 == sub_91210 )
      {
        if ( *((_DWORD *)a2 + 6) == -1 )
        {
          v23 = v27;
          if ( (_QWORD)v27 )
          {
            v24 = 0;
            do
            {
              if ( (unsigned int)sub_90E60((__int64)a2, (int *)(v26 + 8 * v24)) && !*((_DWORD *)a2 + 7) )
                *((_DWORD *)a2 + 7) = 1;
              ++v24;
            }
            while ( v23 != v24 );
          }
        }
      }
      else
      {
        v22((__int64)a2, v7, &v26, -2);
      }
    }
    if ( v32 && v31 && (unsigned __int8)sub_8CCD0(a1, v31, v32, &v26, (__int64)"Number of dynamic local relocs") )
    {
      v19 = **a2;
      if ( v19 == sub_91210 )
      {
        if ( !*((_DWORD *)a2 + 6) )
        {
          v20 = v27;
          if ( (_QWORD)v27 )
          {
            v21 = 0;
            do
            {
              if ( (unsigned int)sub_90E60((__int64)a2, (int *)(v26 + 8 * v21)) && !*((_DWORD *)a2 + 7) )
                *((_DWORD *)a2 + 7) = 1;
              ++v21;
            }
            while ( v20 != v21 );
          }
        }
      }
      else
      {
        v19((__int64)a2, v7, &v26, -1);
      }
    }
  }
  for ( i = 0; i < *(_QWORD *)(a1 + 256); ++i )
  {
    v13 = *(_QWORD *)(a1 + 248) + 80 * i;
    v14 = *(_DWORD *)(v13 + 60);
    if ( v14 )
    {
      qsnprintf(
        v33,
        80,
        "Number of relocs for section (%.16s,%.16s)",
        (const char *)(v13 + 16),
        (const char *)(*(_QWORD *)(a1 + 248) + 80 * i));
      if ( (unsigned __int8)sub_8CCD0(a1, *(_DWORD *)(v13 + 56), v14, &v26, (__int64)v33) )
      {
        v15 = **a2;
        if ( v15 == sub_91210 )
        {
          if ( (_DWORD)i + 1 == *((_DWORD *)a2 + 6) )
          {
            v17 = v27;
            if ( (_QWORD)v27 )
            {
              v18 = 0;
              do
              {
                if ( (unsigned int)sub_90E60((__int64)a2, (int *)(v26 + 8 * v18)) && !*((_DWORD *)a2 + 7) )
                  *((_DWORD *)a2 + 7) = 1;
                ++v18;
              }
              while ( v17 != v18 );
            }
          }
        }
        else
        {
          v15((__int64)a2, *(_QWORD *)(v13 + 32), &v26, i);
        }
      }
    }
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  return v34 - __readfsqword(0x28u);
}

