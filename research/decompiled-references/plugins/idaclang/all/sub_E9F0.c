__int64 __fastcall sub_E9F0(_QWORD *a1, const char *a2, unsigned __int8 a3, __int64 *a4)
{
  __int64 idati; // rbp
  __int64 v7; // rax
  int v8; // eax
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  char *v11; // [rsp+8h] [rbp-50h]
  __int16 v12; // [rsp+10h] [rbp-48h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  idati = *a4;
  v13 = __readfsqword(0x28u);
  if ( a2 )
  {
    v11 = (char *)a2;
    v12 = 256;
    if ( !idati )
      idati = get_idati();
    v10 = idati;
    if ( (unsigned __int8)create_tinfo(a1, 61, 61, &v10)
      && (get_tinfo_property(*a1, 5) || a3 == (get_tinfo_property(*a1, 2) & 0x3F)) )
    {
      return 1;
    }
    idati = *a4;
  }
  v12 = 0;
  v11 = "";
  v7 = idati;
  if ( !idati )
    v7 = get_idati();
  v10 = v7;
  create_tinfo(a1, a3, 189, &v10);
  v8 = save_tinfo(a1, idati, 0, a2, 5);
  if ( !v8 )
    return 1;
  sub_67C0(a4 + 10, (__int64)"failed to forward declare type: name=\"%s\" code=%d\n", a2, v8);
  ++a4[17];
  return 0;
}
