unsigned __int64 __fastcall sub_1399B0(__int64 a1, unsigned __int64 a2)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbp
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD ***)(a1 + 792);
  v7 = __readfsqword(0x28u);
  v3 = sub_139930(v2, a2);
  if ( v3 && *v3 )
  {
    v6 = 0;
    v4 = (_QWORD *)*v3;
    sub_3718A0(*(_QWORD *)(*v3 + 8LL), &v6);
    sub_25EEB0(v4[1] + 408LL, *v4, &v6);
    clear_tinfo_t();
  }
  return v7 - __readfsqword(0x28u);
}

