__int64 __fastcall pyvar_to_idcvar_or_error(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v5 = 0;
  v3 = pyvar_to_idcvar(a1, a2, &v5);
  LOBYTE(v2) = v3 > 0;
  if ( v3 <= 0 )
    (*(void (__fastcall **)(_QWORD, const char *))(qword_24798 + 448))(
      **(_QWORD **)(qword_24798 + 1088),
      "Could not convert Python object to IDC object!");
  return v2;
}

