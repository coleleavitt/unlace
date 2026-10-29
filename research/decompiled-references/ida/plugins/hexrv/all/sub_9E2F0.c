__int64 __fastcall sub_9E2F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v7; // ebp
  __int64 v9; // r12
  __int64 v10; // [rsp+8h] [rbp-60h]
  _BYTE v11[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( a6 == 1
    && a2
    && (unsigned __int8)sub_11A400(a2)
    && (unsigned __int8)sub_11A400(a3)
    && (*(_DWORD *)(a2 + 4) & 0x40010) == 0
    && (*(_BYTE *)(a2 + 65) & 2) == 0
    && !sub_9E190(*(_QWORD *)(a1 + 64), a2)
    && *(_DWORD *)(a3 + 36) == *(_DWORD *)(a3 + 68) + *(_DWORD *)(a2 + 68)
    && (unsigned __int8)sub_12C700(a1, *(_QWORD *)(a2 + 8), a2 + 64, *(_QWORD *)(a3 + 8), a3 + 64, 1)
    && (unsigned __int8)sub_12DEB0(a1, a2, a2, a3, a3, 0) )
  {
    sub_11F580(v11, a2 + 64);
    v7 = sub_12E960(a1, *(_QWORD *)(a2 + 8), (unsigned int)v11, *(_QWORD *)(a3 + 8), (int)a3 + 64, 8);
    if ( (_BYTE)v7 )
    {
      if ( v11[0] == 4 )
      {
        v7 = 0;
      }
      else
      {
        v10 = *(_QWORD *)(a2 + 24);
        sub_120EE0(a2, *(_QWORD *)(a3 + 40));
        *(_QWORD *)(a2 + 24) = v10;
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        if ( (*(_BYTE *)(v9 + 48) & 0x10) != 0 && *(int *)(a2 + 36) > 4 && (unsigned int)(*(_DWORD *)a2 - 22) <= 2 )
          sub_92320(a2 + 48, v9, v10, 31);
        sub_120CC0(a2 + 64);
        sub_9CDC0(v9, a2, *(_DWORD *)(a3 + 4));
        sub_1190E0(a3);
      }
    }
    sub_1188E0(v11);
  }
  else
  {
    return 0;
  }
  return v7;
}

