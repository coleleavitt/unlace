__int64 __fastcall sub_1127B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // r13d
  __int64 v6; // rax
  int v7; // r12d
  _BYTE *v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // r14
  int v11; // r12d
  unsigned __int32 v12; // r13d
  int v13; // ebx
  unsigned int i; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v19; // [rsp+8h] [rbp-60h]
  unsigned int v20; // [rsp+1Ch] [rbp-4Ch]
  __int64 v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 136);
  v5 = *(_DWORD *)(a2 + 36);
  v21[1] = __readfsqword(0x28u);
  v6 = *(unsigned __int16 *)(a1 + 68);
  v7 = *(_DWORD *)(a2 + 40);
  v8 = *(_BYTE **)(a1 + 56);
  v21[0] = v4;
  if ( *(_QWORD *)(v4 + 88) < (unsigned __int64)&v8[v6]
    || (unsigned __int64)v8 < *(_QWORD *)(v4 + 80) + (unsigned __int64)*(unsigned __int16 *)(v4 + 18) )
  {
    v9 = 11;
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      75627,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
  }
  else
  {
    v9 = sub_112690(v4, v8, a2, 0, v6);
    if ( !v9 )
    {
      v10 = *(unsigned __int16 *)(a1 + 68);
      v11 = v5 + v7;
      if ( (_DWORD)v10 != v11 )
      {
        v19 = *(_QWORD *)(v21[0] + 72);
        v12 = _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(a1 + 56) + v10));
        v13 = *(_DWORD *)(v19 + 56) - 4;
        for ( i = sub_C3B70((_QWORD *)v19, v12, v21); ; i = sub_C3B70((_QWORD *)v19, v12, v21) )
        {
          if ( i )
            return i;
          if ( *(_WORD *)(*(_QWORD *)(v21[0] + 112) + 54LL) != 1 || *(_BYTE *)v21[0] )
            break;
          v15 = *(_QWORD *)(v21[0] + 80);
          if ( (int)v10 + v13 >= (unsigned int)v11 )
            v13 = v11 - v10;
          else
            v12 = _byteswap_ulong(*(_DWORD *)v15);
          i = sub_112690(v21[0], (_BYTE *)(v15 + 4), a2, v10, v13);
          v16 = *(_QWORD *)(v21[0] + 112);
          if ( v16 )
          {
            v20 = i;
            sub_C36A0(v16);
            i = v20;
          }
          if ( i )
            return i;
          LODWORD(v10) = v13 + v10;
          if ( v11 <= (int)v10 )
            return v9;
        }
        sub_E8BB0(
          0xBu,
          "%s at line %d of [%.10s]",
          "database corruption",
          75646,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        v17 = *(_QWORD *)(v21[0] + 112);
        if ( v17 )
          sub_C36A0(v17);
        return 11;
      }
    }
  }
  return v9;
}
