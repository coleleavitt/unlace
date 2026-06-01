__int64 __fastcall sub_52FF0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v5[1] = __readfsqword(0x28u);
  if ( (unsigned int)sub_79FB0(v2, v5) )
  {
    return 1;
  }
  else
  {
    v3 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 272LL))(a2) != 2 )
    {
      if ( !under_debugger )
        interr(30555);
      BUG();
    }
    a2[2] = v5[0];
  }
  return v3;
}
