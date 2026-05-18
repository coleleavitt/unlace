__int64 __fastcall sub_D3350(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7[3]; // [rsp+0h] [rbp-18h] BYREF

  v7[0] = 0;
  v7[1] = __readfsqword(0x28u);
  if ( (unsigned int)sub_D31A0(a1, a2, 7u, v7) )
    return 0;
  result = v7[0];
  if ( *(_UNKNOWN **)v7[0] != &unk_23BE60 )
    return 0;
  v3 = *(_QWORD *)(v7[0] + 8);
  v4 = *(_QWORD *)(v3 + 32);
  if ( v4 )
  {
    xmmword_241500(v4);
    v6 = *(_QWORD *)(v3 + 32);
    if ( *(_QWORD *)(v3 + 64) )
      v7[0] = 0;
    if ( v6 )
      xmmword_241510(v6, a2, v5);
    return v7[0];
  }
  if ( *(_QWORD *)(v3 + 64) )
  {
    v7[0] = 0;
    return v7[0];
  }
  return result;
}
