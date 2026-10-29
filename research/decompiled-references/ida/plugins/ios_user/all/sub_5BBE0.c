__int64 __fastcall sub_5BBE0(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  char *v4; // r12
  char *v5; // [rsp+0h] [rbp-8h] BYREF
  __int128 vars0; // [rsp+8h] [rbp+0h] BYREF
  unsigned __int64 vars10; // [rsp+18h] [rbp+10h]
  __int128 *vars20; // [rsp+28h] [rbp+20h]

  vars20 = &vars0;
  vars10 = __readfsqword(0x28u);
  vars0 = 0;
  v5 = (char *)qvector_reserve();
  *(_QWORD *)&vars0 = 16;
  strcpy(v5, "QStartNoAckMode");
  sub_5ABF0(a1, &v5);
  if ( v5 )
  {
    *(_QWORD *)&vars0 = 0;
    qfree();
  }
  *(_BYTE *)(a1 + 248) = 1;
  vars0 = 0;
  v1 = sub_5AB40(a1);
  *(_BYTE *)(a1 + 16) = 0;
  if ( v1 == 1 )
  {
    v5 = nullptr;
    sub_59220(a1, (__int64 *)&vars0);
    v4 = v5;
    if ( (unsigned int)sub_59CB0(&vars0, nullptr) == 1 )
    {
      *(_BYTE *)(a1 + 248) = 1;
      v2 = 1;
    }
    else
    {
      *(_BYTE *)(a1 + 248) = 0;
      sub_5A040(a1, byte_71F22, 1);
      v2 = *(unsigned __int8 *)(a1 + 248);
    }
    if ( v4 )
      qfree();
  }
  else
  {
    *(_BYTE *)(a1 + 248) = 0;
    sub_5A040(a1, byte_71F22, 1);
    return *(unsigned __int8 *)(a1 + 248);
  }
  return v2;
}

