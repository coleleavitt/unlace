unsigned __int64 __fastcall sub_4E20(_QWORD *a1, __int64 a2)
{
  const char *segment_alignment; // rax
  char *v5; // r12
  unsigned __int8 v6; // al
  unsigned __int8 v7; // di
  const char *segment_combination; // rax
  const char *v9; // rdx
  __int64 segm_base; // rax
  __int64 (__fastcall *v12)(_QWORD *, char); // rax
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    switch ( *(_BYTE *)(a2 + 40) )
    {
      case 0:
        v5 = "at: ";
        break;
      case 1:
        v5 = "byte";
        break;
      case 2:
        v5 = "word";
        break;
      case 3:
        v5 = "para";
        break;
      case 4:
        v5 = "page";
        break;
      case 6:
        v5 = "4k";
        break;
      case 9:
        v5 = "64";
        break;
      default:
        segment_alignment = (const char *)get_segment_alignment();
        v5 = &byte_8C79;
        sub_47B0((__int64)a1, (__int64)"Segment alignment '%s' cannot be represented in assembly", segment_alignment);
        break;
    }
    get_segm_name();
    get_segm_class();
    v6 = getinf();
    sub_4640((__int64)a1, (__int64)byte_8C51, (unsigned int)v6 - 1, byte_8E90, v5);
    if ( !*(_BYTE *)(a2 + 40) )
    {
      segm_base = get_segm_base();
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 104LL))(a1, segm_base, 0);
      v12 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v12 == sub_45C0 )
      {
        v13 = a1[4];
        v14 = 2;
        if ( v13 )
          v14 = v13-- + 1;
        v15 = a1[3];
        if ( a1[5] < v14 )
        {
          v16 = qvector_reserve();
          a1[3] = v16;
          v15 = v16;
        }
        a1[4] = v14;
        *(_BYTE *)(v15 + v13) = 32;
        *(_BYTE *)(a1[3] + v13 + 1) = 0;
      }
      else
      {
        v12(a1, 32);
      }
    }
    v7 = *(_BYTE *)(a2 + 41);
    if ( v7 == 6 )
    {
      v9 = "common";
      goto LABEL_10;
    }
    if ( v7 > 6u )
    {
      if ( v7 == 7 )
        goto LABEL_9;
    }
    else if ( ((v7 - 2) & 0xFD) == 0 )
    {
LABEL_9:
      v9 = &byte_8C79;
LABEL_10:
      sub_4640((__int64)a1, (__int64)"%s '%s'", v9, byte_8E90);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 27);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 128LL))(a1, 0);
      return v17 - __readfsqword(0x28u);
    }
    segment_combination = (const char *)get_segment_combination();
    sub_47B0((__int64)a1, (__int64)"Segment combination '%s' cannot be represented in assembly", segment_combination);
    goto LABEL_9;
  }
  return v17 - __readfsqword(0x28u);
}

