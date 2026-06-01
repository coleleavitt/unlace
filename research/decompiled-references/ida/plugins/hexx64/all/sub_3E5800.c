__int64 __fastcall sub_3E5800(__int64 *a1, int a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int64 *v5; // rbp
  const char *v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  char *v14; // rbx
  __int64 v15; // rdi
  unsigned __int64 v17; // r13
  const void *v18; // rbp
  void *v19; // rdi
  __int64 v20; // rax
  _QWORD v21[3]; // [rsp+0h] [rbp-188h] BYREF
  char v22; // [rsp+18h] [rbp-170h]
  __int64 (__fastcall **v23)(); // [rsp+20h] [rbp-168h] BYREF
  __int64 v24; // [rsp+28h] [rbp-160h]
  __int64 v25; // [rsp+30h] [rbp-158h]
  __int64 (__fastcall **v26)(); // [rsp+40h] [rbp-148h] BYREF
  char v27; // [rsp+90h] [rbp-F8h] BYREF
  char v28; // [rsp+F0h] [rbp-98h] BYREF
  __m128i v29; // [rsp+F8h] [rbp-90h]
  __m128i v30; // [rsp+108h] [rbp-80h]
  __int64 v31; // [rsp+118h] [rbp-70h]
  unsigned __int64 v32; // [rsp+120h] [rbp-68h]
  __int64 v33[11]; // [rsp+130h] [rbp-58h] BYREF

  v33[5] = __readfsqword(0x28u);
  sub_3E4380((__int64)&v23, a2, 1u);
  v21[0] = 0;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, &v26, v21, &callui, v3);
  if ( v4 < 0 )
    goto LABEL_11;
  if ( v4 >= v32 || (v5 = (unsigned __int64 *)(v31 + 32 * v4)) == nullptr )
  {
    sub_2B4E70((__int64)"Stock comments: could not get chosen item %llX", v4);
LABEL_10:
    netnode_kill();
    netnode_check();
LABEL_11:
    v8 = 0;
    goto LABEL_12;
  }
  sub_3E55B0((__int64)v21, (__int64)v33, *v5);
  if ( v22 )
  {
    v6 = s1;
    if ( v5[2] )
      v6 = (const char *)v5[1];
    v7 = v21[0];
    sub_2B4E70((__int64)"Stock comments: detected corruption when moving chosen comment %llX \"%s\" to front", *v5, v6);
    if ( v7 )
      qfree(v7);
    goto LABEL_10;
  }
  if ( a1 != (__int64 *)(v5 + 1) )
  {
    v17 = v5[2];
    if ( v17 < 2 )
    {
      a1[1] = 0;
    }
    else
    {
      v18 = (const void *)v5[1];
      v19 = (void *)*a1;
      if ( a1[2] < v17 )
      {
        v20 = qvector_reserve((__int64)a1, *a1, v17, 1);
        *a1 = v20;
        v19 = (void *)v20;
      }
      a1[1] = v17;
      memmove(v19, v18, v17 - 1);
      *(_BYTE *)(*a1 + v17 - 1) = 0;
    }
  }
  v8 = 1;
LABEL_12:
  v23 = off_4E9770;
  v26 = off_4E97D0;
  v29 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4E98F8), (__m128i)(unsigned __int64)&off_4E98A8);
  v30 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E9900), (__m128i)(unsigned __int64)&off_4E98D8);
  if ( v33[0] )
  {
    v33[1] = 0;
    qfree(v33[0]);
  }
  v9 = v31;
  v23 = (__int64 (__fastcall **)())&unk_4ECA40;
  v26 = (__int64 (__fastcall **)())&unk_4ECA78;
  v29 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4E9908), (__m128i)(unsigned __int64)&off_4ECB50);
  v30 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E9910), (__m128i)(unsigned __int64)&off_4ECB80);
  if ( v31 )
  {
    v10 = v32;
    if ( v32 )
    {
      v11 = 0;
      do
      {
        v12 = v9 + 32 * v11;
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
        {
          *(_QWORD *)(v12 + 16) = 0;
          qfree(v13);
          v9 = v31;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    v32 = 0;
    qfree(v9);
  }
  v14 = &v28;
  v26 = (__int64 (__fastcall **)())&unk_4EBE48;
  do
  {
    v15 = *((_QWORD *)v14 - 3);
    v14 -= 24;
    if ( v15 )
    {
      *((_QWORD *)v14 + 1) = 0;
      qfree(v15);
    }
  }
  while ( v14 != &v27 );
  v23 = &off_4E7588;
  if ( v24 )
  {
    v25 = 0;
    qfree(v24);
  }
  return v8;
}

