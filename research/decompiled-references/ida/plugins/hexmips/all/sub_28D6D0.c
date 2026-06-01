__int64 __fastcall sub_28D6D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  bool v6; // bp
  __int64 v7; // rdi
  char v8; // bp
  int tinfo_size; // r15d
  int v10; // eax
  __int64 tinfo_property; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v12[9]; // [rsp+10h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  v2 = a2[3];
  if ( *(_DWORD *)(v2 + 8) != 48 )
    return 0;
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) == 52 )
  {
    tinfo_property = get_tinfo_property();
    if ( !(unsigned __int8)get_tinfo_property() )
    {
      v3 = 0;
LABEL_7:
      clear_tinfo_t();
      return v3;
    }
    v12[0] = get_tinfo_property();
    if ( !(unsigned __int8)get_tinfo_property()
      || (get_tinfo_property() & 0x2F) == 0xD
      || (get_tinfo_property() & 0xF) == 0xB )
    {
      goto LABEL_9;
    }
    v6 = (get_tinfo_property() & 0xF) == 9;
    if ( v6 == ((get_tinfo_property() & 0xF) == 9) )
    {
      v8 = 1;
    }
    else
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      if ( *(_DWORD *)(v7 + 8) != 57
        || a2 == *(__int64 **)(v7 + 24)
        || !*(_BYTE *)(sub_27FAE0(v7, (__int64)a2, nullptr) + 60)
        || !(unsigned __int8)sub_28B6F0(a1, (__int64)a2, (__int64)a2)
        || (getinf() & 0xF) == 6 && (unsigned __int8)getinf_flag() )
      {
        goto LABEL_9;
      }
      v8 = 0;
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
        goto LABEL_9;
    }
    if ( !(unsigned __int8)compare_tinfo() )
    {
      tinfo_size = get_tinfo_size();
      v10 = get_tinfo_size();
      if ( (tinfo_size | v10) < 0 || tinfo_size != v10 )
        goto LABEL_9;
      if ( v8 && !(unsigned __int8)sub_325700(*(_QWORD *)(a1 + 72), &tinfo_property, v12) )
      {
        if ( !(unsigned __int8)sub_240790(
                                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8),
                                 (__int64)a2) )
        {
          copy_tinfo_t();
          sub_250FD0(a2, a2[3]);
          sub_250FD0((__int64 *)a2[3], *(_QWORD *)(a2[3] + 24));
          goto LABEL_25;
        }
LABEL_9:
        v3 = 0;
LABEL_10:
        clear_tinfo_t();
        goto LABEL_7;
      }
    }
    sub_250FD0(a2, a2[3]);
    sub_250FD0(a2, a2[3]);
    sub_250FD0(a2, a2[3]);
LABEL_25:
    if ( (unsigned __int8)sub_27F280(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    v3 = 1;
    goto LABEL_10;
  }
  return v3;
}

