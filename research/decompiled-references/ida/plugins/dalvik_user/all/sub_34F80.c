__int64 *__fastcall sub_34F80(__int64 *a1, __int64 a2, _QWORD *a3, int a4, int a5)
{
  __int64 v8; // r13
  const char *(__fastcall *v9)(__int64); // rax
  char *v10; // rdx
  size_t v11; // r15
  __int64 v12; // r13
  char *v13; // rax
  const char *v14; // r8
  __int64 v15; // r13
  const char *v17; // rsi
  __int64 v18; // rax
  __m128i v19; // xmm0
  void *v20; // rax
  const char *(__fastcall *v21)(__int64); // rax
  __int64 v22; // rax
  size_t v23; // r15
  int v24; // r11d
  __int64 v25; // r10
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  void *v31; // rdi
  const char *v32; // [rsp+8h] [rbp-A0h]
  void *v33; // [rsp+8h] [rbp-A0h]
  int v35; // [rsp+1Ch] [rbp-8Ch]
  __int64 v36; // [rsp+20h] [rbp-88h]
  __int64 v37; // [rsp+28h] [rbp-80h]
  void *src; // [rsp+30h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-70h] BYREF
  int v40; // [rsp+48h] [rbp-60h]
  __int64 v41; // [rsp+50h] [rbp-58h]
  __int64 v42; // [rsp+58h] [rbp-50h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( (debug & 0x40000) != 0 )
    {
      v15 = 0;
      v14 = "NOT ";
      v17 = "nullptr";
LABEL_20:
      sub_111A0((__int64)"DEXSIP: find_source_items(sf=%s, lnnum=%d, colnum=%d) -> %sfound\n", v17, a4, a5, v14);
      goto LABEL_18;
    }
LABEL_17:
    v15 = 0;
    goto LABEL_18;
  }
  v8 = sub_135E0(a1, a2);
  v9 = *(const char *(__fastcall **)(__int64))(*a3 + 16LL);
  if ( v9 != sub_304B0 )
    ((void (__fastcall *)(_QWORD *, _QWORD))v9)(a3, 0);
  v10 = (char *)qbasename();
  if ( !v10 )
    goto LABEL_14;
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( !a4 )
  {
    if ( !(unsigned __int8)sub_30100(v8, (__int64 *)&src, v10) )
    {
      v10 = (char *)src;
      if ( !src )
        goto LABEL_14;
      v11 = n[0];
      if ( n[0] )
      {
        v12 = 0;
        do
        {
          v13 = &v10[48 * v12];
          if ( *(_QWORD *)v13 )
          {
            *((_QWORD *)v13 + 1) = 0;
            qfree();
            v10 = (char *)src;
          }
          ++v12;
        }
        while ( v11 != v12 );
      }
      goto LABEL_13;
    }
    v18 = operator new(0x30u);
    *(_DWORD *)(v18 + 8) = 1;
    v15 = v18;
    v19 = _mm_loadu_si128((const __m128i *)n);
    *(_QWORD *)v18 = &off_7D800;
    v20 = src;
    *(_DWORD *)(v15 + 40) = -1;
    *(_QWORD *)(v15 + 16) = v20;
    *(__m128i *)(v15 + 24) = v19;
    if ( (debug & 0x40000) == 0 )
      goto LABEL_18;
    if ( !v15 )
    {
      v14 = "NOT ";
LABEL_27:
      v21 = *(const char *(__fastcall **)(__int64))(*a3 + 16LL);
      if ( v21 == sub_304B0 )
      {
        v17 = nptr;
        if ( a3[3] )
          v17 = (const char *)a3[2];
      }
      else
      {
        v32 = v14;
        v22 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, char *))v21)(a3, 0, v10);
        v14 = v32;
        v17 = (const char *)v22;
      }
      goto LABEL_20;
    }
LABEL_26:
    v14 = "";
    goto LABEL_27;
  }
  if ( !(unsigned __int8)sub_2FA90(v8, (__int64)&src, v10, a4) )
  {
    if ( src )
    {
LABEL_13:
      n[0] = 0;
      qfree();
    }
LABEL_14:
    if ( (debug & 0x40000) != 0 )
    {
LABEL_15:
      v14 = "NOT ";
      v15 = 0;
      goto LABEL_27;
    }
    goto LABEL_17;
  }
  v15 = operator new(0x30u);
  *(_DWORD *)(v15 + 8) = 1;
  v23 = n[0];
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)v15 = &off_7D800;
  *(_DWORD *)(v15 + 40) = -1;
  *(_OWORD *)(v15 + 24) = 0;
  if ( !v23 )
  {
    v33 = nullptr;
    v24 = v40;
    v25 = v41;
    v26 = v42;
LABEL_33:
    v37 = v26;
    v36 = v25;
    v35 = v24;
    v27 = qvector_reserve();
    *(_QWORD *)(v15 + 16) = v27;
    v28 = v27;
    v26 = v37;
    v29 = *(_QWORD *)(v15 + 24);
    v25 = v36;
    v24 = v35;
    goto LABEL_34;
  }
  v33 = (void *)qalloc_or_throw();
  memcpy(v33, src, v23);
  v29 = *(_QWORD *)(v15 + 24);
  v24 = v40;
  v25 = v41;
  v26 = v42;
  v28 = *(_QWORD *)(v15 + 16);
  v10 = (char *)(v29 + 1);
  if ( *(_QWORD *)(v15 + 32) < (unsigned __int64)(v29 + 1) )
    goto LABEL_33;
LABEL_34:
  v30 = v28 + 48 * v29;
  *(_DWORD *)(v30 + 24) = v24;
  *(_QWORD *)v30 = v33;
  *(_QWORD *)(v30 + 32) = v25;
  *(_QWORD *)(v30 + 40) = v26;
  *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
  v31 = src;
  ++*(_QWORD *)(v15 + 24);
  if ( v31 )
  {
    n[0] = 0;
    qfree();
  }
  if ( (debug & 0x40000) != 0 )
  {
    if ( !v15 )
      goto LABEL_15;
    goto LABEL_26;
  }
LABEL_18:
  *a1 = v15;
  return a1;
}

