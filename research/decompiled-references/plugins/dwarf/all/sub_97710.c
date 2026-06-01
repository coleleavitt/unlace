__int64 __fastcall sub_97710(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  int v5; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-18h] BYREF

  v1 = *a1;
  v6[1] = __readfsqword(0x28u);
  v6[0] = 0;
  v3 = *(_QWORD *)(v1 + 24);
  v5 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, int *, _QWORD *))(a1[32] + 112))(v3, 52, &v5, v6) || !v5 )
    return 0;
  else
    return sub_97630(a1, 52);
}
