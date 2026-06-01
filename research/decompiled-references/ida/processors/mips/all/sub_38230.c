unsigned __int64 __fastcall sub_38230(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char **v3; // rax
  char **v5; // rax
  char **v6; // rax
  _BYTE v7[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v2 = *(unsigned __int16 *)(a2 + 6);
  v8 = __readfsqword(0x28u);
  switch ( *(_BYTE *)(a2 + 34) )
  {
    case 1:
      qsnprintf(v7, 30, "%s.s", off_72BA0[v2]);
      break;
    case 2:
      v5 = off_727A0;
      goto LABEL_7;
    case 3:
      v6 = off_723A0;
      goto LABEL_9;
    case 4:
      v3 = off_71FA0;
      goto LABEL_3;
    case 5:
      v5 = &off_71BA0;
LABEL_7:
      qsnprintf(v7, 30, "%s.p", v5[v2]);
      break;
    case 6:
      v6 = off_717A0;
LABEL_9:
      qsnprintf(v7, 30, "%s.t", v6[v2]);
      break;
    case 7:
      v3 = &off_713A0;
LABEL_3:
      qsnprintf(v7, 30, "%s.q", v3[v2]);
      break;
    default:
      qsnprintf(v7, 30, "$%d", v2);
      break;
  }
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v7, 33);
  return v8 - __readfsqword(0x28u);
}

