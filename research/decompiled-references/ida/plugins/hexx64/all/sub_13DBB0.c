unsigned __int64 __fastcall sub_13DBB0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rbp
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v2 = sub_13DB30(*(_QWORD ***)(a1 + 792), a2);
  if ( v2 && *v2 )
  {
    v3 = *v2;
    sub_3767A0(*(_QWORD *)(*v2 + 8LL));
    sub_263730((__int64 *)(*(_QWORD *)(v3 + 8) + 408LL));
    clear_tinfo_t();
  }
  return v5 - __readfsqword(0x28u);
}

