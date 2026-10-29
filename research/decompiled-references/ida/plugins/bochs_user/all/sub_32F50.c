__int64 __fastcall sub_32F50(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  const char *v4; // rax
  _QWORD v6[75]; // [rsp+0h] [rbp-258h] BYREF

  v6[71] = __readfsqword(0x28u);
  if ( (unsigned int)sub_454F0(*(_QWORD *)(a1 + 2704), v6) )
    goto LABEL_4;
  v2 = *(_QWORD *)(a1 + 2704);
  v3 = a1 + 2624;
  if ( *(_BYTE *)(a1 + 2712) )
  {
    if ( !(unsigned __int8)sub_47E00(v2, v6, v3) )
    {
LABEL_4:
      v4 = (const char *)sub_44660(*(_QWORD *)(a1 + 2704));
      sub_EB00((__int64)"%s", v4);
      return 0;
    }
  }
  else if ( (unsigned int)sub_48070(v2, v6, v3) )
  {
    goto LABEL_4;
  }
  return 1;
}

