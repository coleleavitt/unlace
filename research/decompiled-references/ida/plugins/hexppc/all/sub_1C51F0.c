__int64 __fastcall sub_1C51F0(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // rbx
  char tinfo_property; // al
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6[5]; // [rsp+0h] [rbp-58h] BYREF
  int v7; // [rsp+28h] [rbp-30h]
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v2 = 0;
  v8 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 440) )
    return 0;
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 432) + 104 * v2) != 2 )
  {
    tinfo_property = get_tinfo_property();
    v4 = *(_QWORD *)(a1 + 440);
    if ( (tinfo_property & 0x2F) != 0xD )
    {
      v2 = ++v1;
      if ( v1 < v4 )
        continue;
    }
    goto LABEL_4;
  }
  v4 = *(_QWORD *)(a1 + 440);
LABEL_4:
  if ( v4 == v2 )
    return 0;
  memset(&v6[1], 0, 32);
  v6[0] = (__int64)off_4CB9C8;
  v7 = 0;
  sub_11BFA0(a1, v6);
  result = (unsigned int)v7;
  if ( v7 > 0 )
  {
    sub_63560(a1, 1u, (__int64)"unpacked scattered destination operand");
    return (unsigned int)v7;
  }
  return result;
}

