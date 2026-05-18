__int64 __fastcall sub_E5D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v5; // r13
  __int64 v6; // r12
  int v7; // ebp
  unsigned __int8 *v8; // rbx
  int v9; // eax
  int v10; // r11d
  char *v11; // rcx
  _QWORD v14[11]; // [rsp+20h] [rbp-58h]

  v4 = 0;
  v5 = a2;
  v6 = 0;
  v14[3] = __readfsqword(0x28u);
  v14[0] = a2;
  v14[1] = a3;
  for ( v14[2] = a4; v5; v5 = v14[v6] )
  {
    v7 = *(_DWORD *)(v5 + 8);
    v8 = byte_1BAC50;
    v9 = 7;
    v10 = 0;
    while ( v7 != v9
         || !*(_QWORD *)v5
         || (unsigned int)sub_CA590(*(unsigned __int8 **)v5, (unsigned __int8 *)&aNaturaleftoute[*v8], v7) )
    {
      ++v10;
      v8 += 3;
      if ( v10 == 7 )
        goto LABEL_13;
      v9 = v8[1];
    }
    ++v6;
    v4 |= byte_1BAC50[3 * v10 + 2];
    if ( v6 == 3 )
      break;
  }
  if ( (v4 & 0x21) == 0x21 || (v4 & 0x80u) != 0 || (v4 & 0x38) == 0x20 )
  {
LABEL_13:
    v4 = 1;
    v11 = " ";
    if ( !a3 )
      v11 = "";
    sub_DBD10(a1, "unknown join type: %T%s%T%s%T", a2, v11);
  }
  return v4;
}
