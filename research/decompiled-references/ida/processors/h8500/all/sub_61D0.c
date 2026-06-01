__int64 __fastcall sub_61D0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  _QWORD *v4; // r12
  _DWORD *v5; // rax
  bool v6; // r13
  int i; // r14d
  __int64 v9; // rax
  __int64 (__fastcall *v10)(_QWORD *, char); // rax
  __int64 v11; // r10
  __int64 v12; // rsi
  __int64 v13; // r11
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  bool v16; // al
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-A0h]
  __int64 v19; // [rsp+10h] [rbp-98h]
  __int64 v20; // [rsp+18h] [rbp-90h]
  __int64 v21; // [rsp+30h] [rbp-78h]
  __int64 v22; // [rsp+50h] [rbp-58h]
  unsigned __int64 v23; // [rsp+68h] [rbp-40h]

  v2 = a2[2];
  v23 = __readfsqword(0x28u);
  v4 = (_QWORD *)getseg();
  if ( (getinf() & 0x200) == 0 || !v4 )
    return v23 - __readfsqword(0x28u);
  v5 = *(_DWORD **)(a1 + 16);
  v6 = *v4 == v2;
  for ( i = v5[17]; v5[18] >= i; ++i )
  {
    if ( v5[20] == i )
      continue;
    if ( (unsigned __int8)get_sreg_range() )
    {
      v16 = v6;
      if ( !v2 )
      {
        if ( !(unsigned __int8)get_prev_sreg_range() )
        {
          v9 = *a2;
          if ( a2[4] <= 1u )
            goto LABEL_22;
          goto LABEL_8;
        }
        v16 = v6 || v21 != v22;
      }
      if ( v16 )
      {
        v9 = *a2;
        if ( a2[4] <= 1u )
        {
LABEL_22:
          (*(void (__fastcall **)(_QWORD *, __int64))(v9 + 64))(a2, 4);
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(
            a2,
            *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
            0);
          (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a2 + 56LL))(a2, " assume ", 0);
LABEL_9:
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(
            a2,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * i),
            0);
          v10 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
          if ( v10 == sub_5520 )
          {
            v11 = a2[4];
            if ( v11 )
            {
              v14 = v11 + 1;
              v13 = a2[4];
              v12 = a2[3];
              --v11;
              if ( a2[5] < v14 )
                goto LABEL_25;
            }
            else
            {
              v12 = a2[3];
              v13 = 1;
              v14 = 2;
              if ( a2[5] >= 2u )
                goto LABEL_12;
LABEL_25:
              v20 = v13;
              v19 = v11;
              v18 = v14;
              v17 = qvector_reserve();
              v13 = v20;
              v11 = v19;
              a2[3] = v17;
              v14 = v18;
              v12 = v17;
            }
LABEL_12:
            a2[4] = v14;
            *(_BYTE *)(v12 + v11) = 58;
            *(_BYTE *)(a2[3] + v13) = 0;
          }
          else
          {
            v10(a2, 58);
          }
          v15 = *a2;
          if ( v21 == -1 )
          {
            (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(v15 + 56))(a2, "nothing", 0);
            v5 = *(_DWORD **)(a1 + 16);
            continue;
          }
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v15 + 104))(a2, v21, 16);
          goto LABEL_15;
        }
LABEL_8:
        (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(v9 + 56))(a2, ", ", 0);
        goto LABEL_9;
      }
    }
LABEL_15:
    v5 = *(_DWORD **)(a1 + 16);
  }
  if ( a2[4] > 1u )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 72LL))(a2, 4);
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFF);
  }
  return v23 - __readfsqword(0x28u);
}

