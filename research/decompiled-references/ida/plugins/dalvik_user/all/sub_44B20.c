__int64 __fastcall sub_44B20(__int64 a1)
{
  __int64 result; // rax
  const char *v2; // rbx

  result = sub_5D5C0(*(_QWORD *)(a1 + 40));
  if ( (_DWORD)result == 62 )
  {
    *(_BYTE *)(a1 + 33) = 1;
    *(_BYTE *)(a1 + 56) = 0;
  }
  else
  {
    result = *(unsigned __int8 *)(a1 + 33) ^ 1u;
    *(_BYTE *)(a1 + 56) = *(_BYTE *)(a1 + 33) ^ 1;
    if ( (_BYTE)result )
    {
      v2 = (const char *)sub_5D5D0(*(_QWORD *)(a1 + 40));
      sub_11340((__int64)"JDWP error: %s\n", v2);
      return sub_11270((__int64)"JDWP error: %s", v2);
    }
  }
  return result;
}

