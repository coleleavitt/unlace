unsigned __int64 __fastcall sub_10A60(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]
  __int64 v15; // [rsp+10h] [rbp-38h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v6 = 0;
  v16 = __readfsqword(0x28u);
  while ( (int)v6 < (int)callui(1053, a2, a3, a4, a5, a6, v13, v14, v15, v16) )
  {
    a2 = v6;
    if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64, __int64, __int64))callui)(
                            1054,
                            v6,
                            &v13,
                            v9,
                            v10,
                            v11) )
    {
      v7 = v14;
      if ( v14 != -1 )
      {
        v8 = *(_QWORD *)(a1 + 1008);
        if ( v14 < v8 || v8 == -1 )
          *(_QWORD *)(a1 + 1008) = v14;
        a3 = *(_QWORD *)(a1 + 1016);
        if ( a3 < v7 || a3 == -1 )
          *(_QWORD *)(a1 + 1016) = v7;
      }
    }
    ++v6;
  }
  return v16 - __readfsqword(0x28u);
}

