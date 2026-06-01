__int64 __fastcall sub_3DD8C0(__int64 a1, __int64 a2, __int64 a3, char a4, double a5, double a6, double a7, __m128 a8)
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
  int v24; // ebp
  char v25; // al
  __int64 v26; // rbp
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rdi
  __int64 v29; // rbp
  __int64 (**v30)(); // [rsp+0h] [rbp-88h] BYREF
  __int64 v31; // [rsp+8h] [rbp-80h]
  __int64 v32; // [rsp+10h] [rbp-78h]
  __int128 v33; // [rsp+18h] [rbp-70h]
  __int128 v34; // [rsp+28h] [rbp-60h]
  __int64 v35; // [rsp+38h] [rbp-50h]
  __int64 v36; // [rsp+40h] [rbp-48h]
  unsigned __int64 v37; // [rsp+48h] [rbp-40h]

  v10 = *(_DWORD **)(a2 + 40);
  v37 = __readfsqword(0x28u);
  v12 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 128LL))(v10);
  if ( v12 == -1 )
    return 0;
  v13 = v12;
  if ( dword_4DB948 != (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 112LL))(v10) )
  {
    v17 = callui(123, a3, &callui, v14, v15, v16, v30, v31, v32, v33);
    v18 = v17;
    if ( v17 && a3 == *(_QWORD *)v17 )
    {
      v19 = a4 & 1;
      v30 = nullptr;
      v31 = -1;
      v32 = 0;
      v35 = 0;
      v36 = 3;
      v33 = 0;
      v34 = 0;
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
            if ( v32 )
            {
              *(_QWORD *)&v33 = 0;
              qfree();
            }
            return v21;
          }
          if ( !rangeset_t_find_range() )
          {
            v26 = v35;
            v21 = 0;
            goto LABEL_26;
          }
          v28 = *((volatile signed __int32 **)&v34 + 1);
          *(_QWORD *)&v34 = *(_QWORD *)(v18 + 64);
          v29 = *(_QWORD *)(v18 + 72);
          if ( v29 != *((_QWORD *)&v34 + 1) )
          {
            if ( v29 )
            {
              if ( &_pthread_key_create )
                _InterlockedAdd((volatile signed __int32 *)(v29 + 8), 1u);
              else
                ++*(_DWORD *)(v29 + 8);
              v28 = *((volatile signed __int32 **)&v34 + 1);
            }
            if ( v28 )
              sub_3D1560(v28);
            *((_QWORD *)&v34 + 1) = v29;
          }
          LODWORD(v36) = *(_DWORD *)(v18 + 56);
          v25 = sub_3D4B00(v18, (__int64)&v30, (__int64)v10);
LABEL_22:
          v26 = v35;
          if ( v25 )
          {
            if ( !v35 )
            {
              v27 = *((volatile signed __int32 **)&v34 + 1);
              v21 = 0;
LABEL_29:
              if ( v27 )
                sub_3D1560(v27);
              goto LABEL_10;
            }
            v35 = 0;
            if ( !*(_QWORD *)(a1 + 40) )
            {
              *(_QWORD *)(a1 + 40) = v26;
              v21 = 1;
LABEL_28:
              v27 = *((volatile signed __int32 **)&v34 + 1);
              goto LABEL_29;
            }
            qfree();
            *(_QWORD *)(a1 + 40) = v26;
            v26 = v35;
            v21 = 1;
          }
          else
          {
            v21 = 0;
          }
LABEL_26:
          if ( v26 )
            qfree();
          goto LABEL_28;
        }
      }
      else if ( v19 )
      {
        goto LABEL_9;
      }
      v24 = *(_DWORD *)(v17 + 56);
      if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 112LL))(v10) == dword_4DB948 )
        v24 = v10[3];
      v25 = sub_3DB560(v18, (__int64)&v30, v10, v24, 0.0, a6, a7, a8);
      goto LABEL_22;
    }
    return 0;
  }
  v32 = v13;
  v21 = 0;
  LODWORD(v31) = -1;
  v30 = off_4D3578;
  v23 = idaplace_t__clone();
  if ( v23 )
  {
    if ( *(_QWORD *)(a1 + 40) )
      qfree();
    *(_QWORD *)(a1 + 40) = v23;
    return 1;
  }
  return v21;
}

