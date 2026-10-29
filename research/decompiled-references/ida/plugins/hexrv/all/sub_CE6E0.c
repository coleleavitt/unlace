__int64 __fastcall sub_CE6E0(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4, char a5)
{
  __int64 v6; // rax
  int v7; // ebp
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  unsigned int v10; // ebx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int *v16; // rcx
  char v17; // al
  int *v18; // r12
  int *v19; // r15
  int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-80h]
  __int64 v22; // [rsp+28h] [rbp-78h]
  __m128i v23; // [rsp+30h] [rbp-70h] BYREF
  __int64 v24[2]; // [rsp+40h] [rbp-60h] BYREF
  int v25; // [rsp+50h] [rbp-50h]
  char v26; // [rsp+54h] [rbp-4Ch]
  unsigned __int64 v27; // [rsp+60h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 80);
  v27 = __readfsqword(0x28u);
  v21 = v6;
  v22 = 0;
  v24[0] = 0;
  v24[1] = 0;
  v25 = 0;
  v26 = a5;
  v23 = 0;
  if ( !a5 && *(_DWORD *)(*(_QWORD *)(v6 + 8) + 4LL) == 13 && *(_QWORD *)(a1 + 120) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 112) + 200LL))(
           *(_QWORD *)(v6 + 112),
           **(unsigned int **)(a1 + 112)) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
              **(unsigned int **)(a1 + 112));
      if ( *(_QWORD *)(a1 + 120) <= 1u )
      {
LABEL_38:
        if ( v12 > 7 )
          goto LABEL_16;
        if ( !*(_QWORD *)(a1 + 120) )
        {
LABEL_23:
          v25 = 8;
          v6 = v21;
          goto LABEL_2;
        }
        goto LABEL_20;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) >= (unsigned int)v12 )
      {
        if ( v12 > 7 )
          goto LABEL_16;
LABEL_20:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 200LL))(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL)) )
        {
          v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                  **(unsigned int **)(a1 + 112));
          if ( *(_QWORD *)(a1 + 120) <= 1u
            || *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) >= (unsigned int)v13 )
          {
            goto LABEL_26;
          }
        }
        else if ( *(_QWORD *)(a1 + 120) <= 1u
               || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112)) > 7 )
        {
          goto LABEL_23;
        }
        v13 = round_down_power2();
LABEL_26:
        v25 = v13;
        if ( v13 > 7 )
          goto LABEL_16;
        v14 = *(_QWORD *)(a1 + 80);
        v15 = *(_QWORD *)(a1 + 120);
        v16 = *(int **)(a1 + 112);
        if ( *(_DWORD *)(*(_QWORD *)(v14 + 8) + 4LL) == 13 )
          goto LABEL_32;
        if ( !v15 )
          goto LABEL_16;
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v14 + 112) + 200LL))(
                *(_QWORD *)(v14 + 112),
                (unsigned int)*v16);
        v16 = *(int **)(a1 + 112);
        if ( v17 )
        {
          v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                  (unsigned int)*v16);
          if ( *(_QWORD *)(a1 + 120) <= 1u
            || *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112) >= (unsigned int)v20 )
          {
LABEL_43:
            if ( v20 > 7 )
            {
              v16 = *(int **)(a1 + 112);
              v15 = *(_QWORD *)(a1 + 120);
              goto LABEL_32;
            }
LABEL_16:
            v6 = v21;
            goto LABEL_2;
          }
        }
        else
        {
          v15 = *(_QWORD *)(a1 + 120);
          if ( v15 <= 1 || (unsigned int)(v16[1] - *v16) > 7 )
          {
LABEL_32:
            v18 = &v16[v15];
            if ( v18 != v16 )
            {
              v19 = v16;
              do
                sub_5FB00(v24, *v19++, v25);
              while ( v18 != v19 );
            }
            goto LABEL_16;
          }
        }
        v20 = round_down_power2();
        goto LABEL_43;
      }
    }
    else if ( *(_QWORD *)(a1 + 120) <= 1u
           || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112)) > 7 )
    {
      goto LABEL_16;
    }
    v12 = round_down_power2();
    goto LABEL_38;
  }
LABEL_2:
  if ( *(_BYTE *)(v6 + 145) && *a3 == 4 )
    cleanup_argloc();
  v7 = for_all_arglocs();
  cleanup_argloc();
  if ( v7 )
  {
    v10 = 0;
  }
  else
  {
    v8 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    v9 = _mm_loadu_si128(&v23);
    v22 = *a2;
    *a2 = 0;
    *(__m128i *)(a2 + 1) = v9;
    v10 = 1;
    v23 = v8;
  }
  qfree();
  if ( v22 )
  {
    v23.m128i_i64[0] = 0;
    qfree();
  }
  return v10;
}

