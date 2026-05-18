__int64 __fastcall sub_181490(__m128i *a1, __int64 a2, _BYTE *a3)
{
  const char *v3; // r13
  bool v4; // zf
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 result; // rax
  const char *v9; // rax
  char *v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rbx
  char *v13; // rdx
  void *v14; // rax
  char *v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // rbx
  char *v18; // rcx
  void *v19; // rdx
  int v20; // [rsp+Ch] [rbp-5Ch]
  unsigned int v21; // [rsp+Ch] [rbp-5Ch]
  char v22; // [rsp+1Fh] [rbp-49h] BYREF
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v3 = s1;
  v4 = *(_QWORD *)(a2 + 8) == 0;
  v25 = __readfsqword(0x28u);
  if ( !v4 )
    v3 = *(const char **)a2;
  v6 = sub_17EC70((__int64)a1, v3);
  *a3 = 0;
  v7 = (__int64)v6;
  if ( !v6 || (unsigned __int8)sub_17D460((__int64)a1, (__int64)v6) )
    return 0;
  v4 = *(_BYTE *)(v7 + 25) == 0;
  ptr = nullptr;
  v24 = 0;
  if ( v4 )
  {
LABEL_8:
    if ( *(_QWORD *)(v7 + 8) > 1u )
    {
      sub_17D1E0(a1->m128i_i64, v7, (__int64 *)&ptr);
      a1[5].m128i_i32[0] = a1[4].m128i_i32[0] - 1;
      v9 = s1;
      if ( *(_QWORD *)(v7 + 8) )
        v9 = *(const char **)v7;
      *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
    }
    v10 = (char *)ptr;
    *a3 = 1;
    if ( v10 )
    {
      v11 = v24;
      if ( (_QWORD)v24 )
      {
        v12 = 0;
        do
        {
          v13 = &v10[24 * v12];
          v14 = *(void **)v13;
          if ( *(_QWORD *)v13 )
          {
            *((_QWORD *)v13 + 1) = 0;
            j__free(v14);
            v10 = (char *)ptr;
          }
          ++v12;
        }
        while ( v11 != v12 );
      }
      *(_QWORD *)&v24 = 0;
      j__free(v10);
    }
    return 0;
  }
  result = sub_180F20(a1, (__int64 *)&ptr, &v22);
  if ( !(_DWORD)result && v22 )
  {
    if ( *(unsigned __int8 *)(v7 + 24) == (_QWORD)v24 )
      goto LABEL_8;
    sub_18FAC0(0, v3);
    result = sub_18FA40(39);
  }
  v15 = (char *)ptr;
  if ( ptr )
  {
    v16 = v24;
    if ( (_QWORD)v24 )
    {
      v17 = 0;
      do
      {
        v18 = &v15[24 * v17];
        v19 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          v20 = result;
          j__free(v19);
          v15 = (char *)ptr;
          LODWORD(result) = v20;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    v21 = result;
    *(_QWORD *)&v24 = 0;
    j__free(v15);
    return v21;
  }
  return result;
}
