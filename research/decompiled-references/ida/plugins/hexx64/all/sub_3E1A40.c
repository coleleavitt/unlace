__int64 __fastcall sub_3E1A40(__int64 a1, __int64 a2, __int64 a3, char a4, double a5, double a6, __m128i a7, __m128 a8)
{
  _DWORD *v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r13
  int v19; // r12d
  __int64 v20; // rdi
  unsigned int v21; // ebx
  __int64 v23; // rbp
  __int64 v24; // rdi
  int v25; // ebp
  char v26; // al
  __int64 v27; // rbp
  __int64 v28; // rdi
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rdi
  __int64 v31; // rbp
  __int64 (__fastcall **v32)(); // [rsp+0h] [rbp-88h] BYREF
  __int64 v33; // [rsp+8h] [rbp-80h]
  __int64 v34; // [rsp+10h] [rbp-78h]
  __int128 v35; // [rsp+18h] [rbp-70h]
  __int128 v36; // [rsp+28h] [rbp-60h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  __int64 v38; // [rsp+40h] [rbp-48h]
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v10 = *(_DWORD **)(a2 + 40);
  v39 = __readfsqword(0x28u);
  v12 = (*(__int64 (__fastcall **)(_DWORD *, double, double, double, double))(*(_QWORD *)v10 + 128LL))(
          v10,
          a5,
          a6,
          *(double *)a7.m128i_i64,
          *(double *)a8.m128_u64);
  if ( v12 == -1 )
    return 0;
  v13 = v12;
  if ( dword_4EEA08 != (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 112LL))(v10) )
  {
    callui(123, a3, &callui, v14, v15, v16, v32, v33, v34, v35);
    v18 = v17;
    if ( v17 && a3 == *(_QWORD *)v17 )
    {
      v19 = a4 & 1;
      v32 = nullptr;
      v33 = -1;
      v34 = 0;
      v37 = 0;
      v38 = 3;
      v35 = 0;
      v36 = 0;
      v20 = *(_QWORD *)(v17 + 64);
      if ( v20 && (unsigned int)(*(_DWORD *)(v20 + 60) - 1) <= 1 )
      {
        if ( v19 )
        {
          if ( !*(_QWORD *)(v20 + 24) )
          {
LABEL_9:
            v21 = 0;
LABEL_10:
            if ( v34 )
            {
              *(_QWORD *)&v35 = 0;
              qfree(v34);
            }
            return v21;
          }
          if ( !rangeset_t_find_range() )
          {
            v27 = v37;
            v21 = 0;
            goto LABEL_26;
          }
          v30 = *((volatile signed __int32 **)&v36 + 1);
          *(_QWORD *)&v36 = *(_QWORD *)(v18 + 64);
          v31 = *(_QWORD *)(v18 + 72);
          if ( v31 != *((_QWORD *)&v36 + 1) )
          {
            if ( v31 )
            {
              if ( &_pthread_key_create )
                _InterlockedAdd((volatile signed __int32 *)(v31 + 8), 1u);
              else
                ++*(_DWORD *)(v31 + 8);
              v30 = *((volatile signed __int32 **)&v36 + 1);
            }
            if ( v30 )
              sub_3D56E0(v30);
            *((_QWORD *)&v36 + 1) = v31;
          }
          LODWORD(v38) = *(_DWORD *)(v18 + 56);
          v26 = sub_3D8C80(v18, &v32, (__int64)v10);
LABEL_22:
          v27 = v37;
          if ( v26 )
          {
            if ( !v37 )
            {
              v29 = *((volatile signed __int32 **)&v36 + 1);
              v21 = 0;
LABEL_29:
              if ( v29 )
                sub_3D56E0(v29);
              goto LABEL_10;
            }
            v37 = 0;
            v28 = *(_QWORD *)(a1 + 40);
            if ( !v28 )
            {
              *(_QWORD *)(a1 + 40) = v27;
              v21 = 1;
LABEL_28:
              v29 = *((volatile signed __int32 **)&v36 + 1);
              goto LABEL_29;
            }
            qfree(v28);
            *(_QWORD *)(a1 + 40) = v27;
            v27 = v37;
            v21 = 1;
          }
          else
          {
            v21 = 0;
          }
LABEL_26:
          if ( v27 )
            qfree(v27);
          goto LABEL_28;
        }
      }
      else if ( v19 )
      {
        goto LABEL_9;
      }
      v25 = *(_DWORD *)(v17 + 56);
      if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 112LL))(v10) == dword_4EEA08 )
        v25 = v10[3];
      v26 = sub_3DF6E0(v18, (__int64)&v32, v10, v25, 0.0, a6, a7, a8);
      goto LABEL_22;
    }
    return 0;
  }
  v34 = v13;
  v21 = 0;
  LODWORD(v33) = -1;
  v32 = off_4E6478;
  v23 = idaplace_t__clone();
  if ( v23 )
  {
    v24 = *(_QWORD *)(a1 + 40);
    if ( v24 )
      qfree(v24);
    *(_QWORD *)(a1 + 40) = v23;
    return 1;
  }
  return v21;
}

