__int64 __fastcall sub_A1190(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  char v5; // [rsp+Ch] [rbp-1Ch]

  v3 = a1[31];
  if ( !v3 )
  {
    v5 = a3;
    v3 = sub_87C20(*(_QWORD **)(*a1 + 16LL), *(_QWORD *)(*a1 + 24LL));
    a3 = v5;
    a1[31] = v3;
  }
  *(_QWORD *)(a2 + 16) = v3;
  return sub_A0CE0(a1, a2, a3);
}

