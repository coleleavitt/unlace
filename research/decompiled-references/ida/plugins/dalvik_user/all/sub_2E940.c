__int64 __fastcall sub_2E940(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v7; // r15
  int v8; // r8d
  int v9; // r9d
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rax
  bool v17; // zf
  __int64 *v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // rbx
  int v22; // eax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  char v27; // [rsp+1Fh] [rbp-4B9h] BYREF
  __int64 v28; // [rsp+20h] [rbp-4B8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-4B0h]
  __int128 v30; // [rsp+30h] [rbp-4A8h]
  _QWORD v31[3]; // [rsp+40h] [rbp-498h] BYREF
  __int128 v32; // [rsp+58h] [rbp-480h]
  __int128 v33; // [rsp+68h] [rbp-470h]
  __int128 v34; // [rsp+78h] [rbp-460h]
  _BYTE v35[1032]; // [rsp+90h] [rbp-448h] BYREF
  unsigned __int64 v36; // [rsp+498h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 136);
  v36 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 168) != v4 )
    goto LABEL_22;
  if ( !*(_DWORD *)(a1 + 1820) )
    return 0;
  v29 = 0;
  v30 = 0;
  v7 = a1 + 864;
  while ( (unsigned __int8)sub_48E40(v7, &v28, a3) )
  {
    v31[0] = 0xFFFFFFFFLL;
    v31[1] = -1;
    v31[2] = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    if ( !(unsigned __int8)sub_2E180(a1, (__int64)v31, &v27, &v28, v8, v9) )
    {
      free_debug_event();
      v12 = v29;
      goto LABEL_30;
    }
    if ( v27 )
    {
      v10 = *(_QWORD **)(a1 + 168);
      if ( v10 == (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
      {
        sub_26BE0((_QWORD *)(a1 + 120));
      }
      else
      {
        *v10 = 0xFFFFFFFFLL;
        v10[1] = -1;
        v10[2] = 0;
        copy_debug_event();
        *(_QWORD *)(a1 + 168) += 72LL;
      }
    }
    free_debug_event();
  }
  v11 = v29;
  v12 = v29;
  if ( *(_BYTE *)(a1 + 920) )
  {
LABEL_30:
    if ( v12 )
    {
      v19 = v30;
      if ( (_QWORD)v30 )
      {
        v20 = 0;
        v21 = 0;
        do
        {
          if ( *(_QWORD *)(v12 + v20 + 112) )
          {
            *(_QWORD *)(v12 + v20 + 120) = 0;
            qfree();
            v12 = v29;
          }
          ++v21;
          v20 += 184;
        }
        while ( v19 != v21 );
      }
      *(_QWORD *)&v30 = 0;
      qfree();
    }
    return 0xFFFFFFFFLL;
  }
  if ( v29 )
  {
    v13 = v30;
    if ( (_QWORD)v30 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        if ( *(_QWORD *)(v11 + v14 + 112) )
        {
          *(_QWORD *)(v11 + v14 + 120) = 0;
          qfree();
          v11 = v29;
        }
        ++v15;
        v14 += 184;
      }
      while ( v13 != v15 );
    }
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 168) == *(_QWORD *)(a1 + 136) )
    return 0;
LABEL_22:
  copy_debug_event();
  if ( *(_QWORD *)(a1 + 136) == *(_QWORD *)(a1 + 152) - 72LL )
  {
    free_debug_event();
    operator delete(*(void **)(a1 + 144), 0x1F8u);
    v18 = (__int64 *)(*(_QWORD *)(a1 + 160) + 8LL);
    *(_QWORD *)(a1 + 160) = v18;
    v16 = *v18;
    *(__m128i *)(a1 + 144) = _mm_unpacklo_epi64(
                               (__m128i)(unsigned __int64)*v18,
                               (__m128i)(unsigned __int64)(*v18 + 504));
  }
  else
  {
    free_debug_event();
    v16 = *(_QWORD *)(a1 + 136) + 72LL;
  }
  v17 = *(_BYTE *)(a1 + 792) == 0;
  *(_QWORD *)(a1 + 136) = v16;
  if ( !v17 )
  {
    v22 = sub_58A60(a2, v35, 1024);
    sub_58110(a1, (unsigned int)"GDE: %s\n", v22, v23, v24, v25);
  }
  result = 2;
  if ( *(_QWORD *)(a1 + 136) == *(_QWORD *)(a1 + 168) )
    return 1;
  return result;
}

