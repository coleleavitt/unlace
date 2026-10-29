__int64 __fastcall sub_F34C0(__int64 a1, unsigned __int64 a2, _BYTE *a3, unsigned int a4, double a5)
{
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 i; // rbx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 1496);
  v12[1] = __readfsqword(0x28u);
  v7 = sub_381E90(v6, a2, a3, a4, 0);
  if ( (_BYTE)v7 && ((get_tinfo_property() & 0xF) == 0xC || get_tinfo_property()) )
  {
    for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      v10 = *(_QWORD *)(i + 56);
      if ( v10
        && (unsigned int)(*(_DWORD *)v10 - 56) <= 1
        && !*(_BYTE *)(v10 + 64)
        && (unsigned __int8)sub_E7130(*(_QWORD *)(a1 + 1496), v12, v10, 0, a5)
        && v12[0] == a2 )
      {
        v11 = *(_DWORD *)(i + 24);
        BYTE1(v11) &= ~2u;
        LOBYTE(v11) = v11 | 0x80;
        *(_DWORD *)(i + 24) = v11;
      }
    }
  }
  return v7;
}

