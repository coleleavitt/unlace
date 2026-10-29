__int64 __fastcall sub_EE900(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 i; // rbx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = *(_QWORD *)(a1 + 1496);
  v13[1] = __readfsqword(0x28u);
  v8 = sub_37BE10(v7, a2, a3, a4, 0, a6);
  if ( (_BYTE)v8 && ((get_tinfo_property() & 0xF) == 0xC || get_tinfo_property()) )
  {
    for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      v11 = *(_QWORD *)(i + 56);
      if ( v11
        && (unsigned int)(*(_DWORD *)v11 - 56) <= 1
        && !*(_BYTE *)(v11 + 64)
        && (unsigned __int8)sub_E2570(*(_QWORD *)(a1 + 1496), v13, v11, 0)
        && v13[0] == a2 )
      {
        v12 = *(_DWORD *)(i + 24);
        BYTE1(v12) &= ~2u;
        LOBYTE(v12) = v12 | 0x80;
        *(_DWORD *)(i + 24) = v12;
      }
    }
  }
  return v8;
}

