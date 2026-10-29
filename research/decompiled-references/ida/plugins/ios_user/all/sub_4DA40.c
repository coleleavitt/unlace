unsigned __int64 __fastcall sub_4DA40(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 vars0; // [rsp+8h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+10h] [rbp+8h]
  __int128 vars10; // [rsp+18h] [rbp+10h]
  __int128 vars20; // [rsp+28h] [rbp+20h]
  __int128 vars30; // [rsp+38h] [rbp+30h]
  unsigned __int64 vars40; // [rsp+48h] [rbp+40h]
  __int64 *vars50; // [rsp+58h] [rbp+50h]

  vars50 = &vars0;
  vars40 = __readfsqword(0x28u);
  vars10 = 0;
  vars0 = -1;
  vars8 = 0;
  vars20 = 0;
  vars30 = 0;
  set_debug_event_code();
  v2 = (_QWORD *)a1[21];
  LOBYTE(vars8) = 1;
  vars0 = -1;
  if ( v2 == (_QWORD *)(a1[23] - 72LL) )
  {
    sub_4D910(a1 + 15);
  }
  else
  {
    *v2 = 0xFFFFFFFFLL;
    v2[1] = -1;
    v2[2] = 0;
    copy_debug_event();
    a1[21] += 72LL;
  }
  free_debug_event();
  return vars40 - __readfsqword(0x28u);
}

