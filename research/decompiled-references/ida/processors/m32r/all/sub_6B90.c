__int64 __fastcall sub_6B90(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(_QWORD *, char); // rax
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rsi
  __int64 v17; // rax

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
    case 2:
    case 6:
      return 1;
    case 1:
      goto LABEL_5;
    case 3:
      v6 = *(_BYTE *)(a2 + 32);
      if ( v6 == 2 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
        v3 = *a1;
        v4 = 43;
LABEL_4:
        (*(void (__fastcall **)(_QWORD *, __int64))(v3 + 32))(a1, v4);
        goto LABEL_5;
      }
      if ( v6 > 2 )
      {
        if ( v6 != 3 )
          return 1;
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
        v3 = *a1;
        v4 = 45;
        goto LABEL_4;
      }
      if ( !v6 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
        if ( (unsigned __int8)is_defarg() )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          v7 = *a1;
          v8 = 0;
LABEL_15:
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v7 + 24))(a1, a2, v8);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v9 == sub_68D0 )
          {
            v10 = a1[4];
            if ( v10 )
            {
              v11 = v10 + 1;
              v12 = a1[4];
              --v10;
            }
            else
            {
              v12 = 1;
              v11 = 2;
            }
            v13 = a1[3];
            if ( a1[5] < v11 )
            {
              v17 = qvector_reserve();
              a1[3] = v17;
              v13 = v17;
            }
            a1[4] = v11;
            *(_BYTE *)(v13 + v10) = 32;
            *(_BYTE *)(a1[3] + v12) = 0;
          }
          else
          {
            v9(a1, 32);
          }
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
            33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
          return 1;
        }
LABEL_5:
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
        return 1;
      }
      if ( v6 == 1 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
          33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      }
      return 1;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      v7 = *a1;
      v8 = 196;
      goto LABEL_15;
    case 5:
      v14 = sub_93D0(a1[77], *(_QWORD *)(a2 + 8));
      v15 = *a1;
      if ( !v14 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(v15 + 32))(a1, 35);
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 4);
        return 1;
      }
      v16 = qword_BED0;
      if ( *(_QWORD *)(v14 + 16) )
        v16 = *(__int64 **)(v14 + 8);
      (*(void (__fastcall **)(_QWORD *, __int64 *, __int64))(v15 + 56))(a1, v16, 34);
      return 1;
    case 7:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 120LL))(
              a1,
              a2,
              *(_QWORD *)(a2 + 16) + 16LL * a1[28]) )
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 201);
      return 1;
    default:
      return 1;
  }
}

