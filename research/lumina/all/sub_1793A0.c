unsigned __int64 __fastcall sub_1793A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rax
  const char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r14
  size_t v8; // r15
  unsigned __int8 v9[8]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+8h] [rbp-60h] BYREF
  __int128 v11; // [rsp+10h] [rbp-58h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v2 = sub_18FA20(a1, a2);
  v3 = sub_187280("exception");
  sub_177890(a1, v3);
  v9[0] = 2;
  ptr = (void *)(int)v2;
  v11 = 0;
  sub_178DB0(a1, "qerrno", v9, 0);
  v4 = sub_2C700(-1);
  sub_176520((__int64)v9);
  if ( v4 )
  {
    v5 = strlen(v4);
    v9[0] = 7;
    ptr = nullptr;
    v6 = v5;
    v11 = 0;
    if ( v5 )
    {
      v8 = v5 + 1;
      ptr = (void *)sub_1987B0(&ptr, 0, v5 + 1, 1);
      *(_QWORD *)&v11 = v8;
      memmove(ptr, v4, v6);
      *((_BYTE *)ptr + v6) = 0;
    }
  }
  else
  {
    v9[0] = 7;
    ptr = nullptr;
    v11 = 0;
  }
  sub_178DB0(a1, "description", v9, 0);
  sub_18FA40(v2);
  sub_176520((__int64)v9);
  return v12 - __readfsqword(0x28u);
}
