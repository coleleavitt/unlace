__int64 __fastcall sub_10940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+8h] [rbp-40h]
  __int64 v16; // [rsp+10h] [rbp-38h]
  __int64 v17; // [rsp+18h] [rbp-30h]

  if ( (int)a2 >= (int)callui(1053, a2, a3, a4, a5, a6, v14, v15, v16, __readfsqword(0x28u)) || (int)a2 < 0 )
    return 0;
  LOBYTE(v6) = *(_DWORD *)(a1 + 1036) < (int)a2 || *(_DWORD *)(a1 + 1036) <= 0;
  if ( !(_BYTE)v6 )
  {
    sub_9EE0((__int64)"Cannot change PC to an instruction before a library load/unload event happened\n");
    return 0;
  }
  *(_DWORD *)(a1 + 1032) = a2;
  *(_BYTE *)(a1 + 1040) = 1;
  v13 = -1;
  if ( (unsigned __int8)sub_10780(a1, (__int64)&v14, 1u, v7, v8, v9) )
    v13 = v15;
  callui(1021, v13, 0xFFFFFFFFLL, 0, v11, v12, v14, v15, v16, v17);
  return v6;
}

