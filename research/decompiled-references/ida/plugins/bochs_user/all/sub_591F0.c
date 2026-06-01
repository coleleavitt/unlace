__int64 __fastcall sub_591F0(__int64 a1, __int64 a2)
{
  __int64 current_extlang; // rbx
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64 *); // rax
  unsigned int v4; // ebp
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v6 = 0;
  current_extlang = get_current_extlang();
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(current_extlang + 48);
  v7 = 0;
  if ( v3 )
  {
    v4 = v3(a2, 0, &v6);
    if ( (_BYTE)v4 )
      goto LABEL_4;
  }
  else
  {
    sub_F490(&v6);
  }
  sub_59130(a1);
  v4 = 0;
LABEL_4:
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  if ( current_extlang )
    --*(_DWORD *)(current_extlang + 12);
  return v4;
}

