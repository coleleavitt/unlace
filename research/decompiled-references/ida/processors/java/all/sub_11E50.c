__int64 __fastcall sub_11E50(__int64 a1, __int16 a2, unsigned __int16 *a3)
{
  __int64 v5; // rdi
  __int64 v7; // r12
  __int64 v8; // rcx

  v5 = *(_QWORD *)(a1 + 33312);
  switch ( a2 )
  {
    case 2:
      v7 = a1 + 32987;
      sub_11D90(v5, a1 + 32987, "Descriptor", a3[2]);
      v8 = a3[3];
      goto LABEL_7;
    case 3:
      v7 = a1 + 32987;
      sub_11D90(v5, a1 + 32987, "Class", a3[3]);
      sub_11D90(*(_QWORD *)(a1 + 33312), a1 + 32987, " ref", a3[2]);
      sub_11D90(*(_QWORD *)(a1 + 33312), a1 + 32987, " Descriptor", a3[4]);
      v8 = a3[5];
LABEL_7:
      sub_11D90(*(_QWORD *)(a1 + 33312), v7, " Name", v8);
      v5 = *(_QWORD *)(a1 + 33312);
      break;
    case 1:
      sub_11D90(v5, a1 + 32987, "Index", a3[2]);
      v5 = *(_QWORD *)(a1 + 33312);
      break;
  }
  qfputc(10, v5);
  return 1;
}

