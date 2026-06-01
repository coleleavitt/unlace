__int64 __fastcall sub_1E370(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r12
  char v10; // al
  _QWORD v11[9]; // [rsp+0h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 1896);
  v11[1] = __readfsqword(0x28u);
  if ( v1 == -1
    || (v2 = *(int *)(a1 + 1176),
        v11[0] = 0,
        v3 = *(int *)(qword_9AD30 + 144 * v2 + 128),
        v3 != (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                a1,
                v1 + 16,
                v11,
                v3,
                0))
    || (v10 = sub_2EDF0(a1 + 1704, v11[0]), v5 = v11[0], !v10) )
  {
    if ( *(_BYTE *)(a1 + 2145) )
      return -1;
    v4 = sub_30490(a1, *(unsigned int *)(a1 + 1364));
    if ( v4 < *(_QWORD *)(a1 + 1880) || v4 >= *(_QWORD *)(a1 + 1888) )
    {
      return -1;
    }
    else
    {
      v7 = v4 & 0xFFFFFFFFFFF00000LL;
      v8 = v7 + 0x100000;
      v9 = v7 - 32505856;
LABEL_9:
      v5 = v8 - 0x100000;
      while ( !(unsigned __int8)sub_2EDF0(a1 + 1704, v5) )
      {
        v5 += 4096LL;
        if ( v5 == v8 )
        {
          if ( v8 - 0x100000 != v9 )
          {
            v8 -= 0x100000LL;
            goto LABEL_9;
          }
          *(_BYTE *)(a1 + 2145) = 1;
          return -1;
        }
      }
    }
  }
  return v5;
}

