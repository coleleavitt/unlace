__int64 __fastcall sub_4CD0(__int64 a1)
{
  __int64 (__fastcall *v1)(char *); // rax

  v1 = *(__int64 (__fastcall **)(char *))(qword_8198 + 120);
  if ( !v1 )
    return 1;
  if ( *(_QWORD *)(a1 + 776) )
    return v1(*(char **)(a1 + 768));
  return v1(&byte_520F);
}

