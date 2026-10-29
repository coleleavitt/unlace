__int64 __fastcall sub_10E80(__int64 a1, _DWORD *a2, __int64 a3, double a4)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int16 v6; // ax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 segm_by_name; // rax
  __int64 v12; // rdx

  if ( a3 == -1 )
  {
    segm_by_name = get_segm_by_name();
    if ( segm_by_name )
    {
      if ( *(_QWORD *)(segm_by_name + 48) == -1 )
        goto LABEL_6;
    }
    else if ( !get_segm_by_sel() )
    {
      goto LABEL_6;
    }
  }
  if ( (word_349D0 & 0x400) != 0 && (unsigned __int64)qword_349D8 > 1 )
    sub_D0A0();
  else
    set_default_dataseg();
LABEL_6:
  result = sub_10B90(a1, a2, a4);
  if ( (_BYTE)result )
  {
    if ( *(_WORD *)(a1 + 96) != 523
      || *(_WORD *)(a1 + 76) != 512
      || (set_name(), get_qword(), result = sub_10B90(a1, a2, a4), (_BYTE)result) )
    {
      result = getseg();
      v5 = result;
      if ( result )
      {
        v6 = *(_WORD *)(result + 44);
        if ( (v6 & 4) != 0 )
        {
          *(_WORD *)(v5 + 44) = v6 & 0xFFFB;
          update_segm();
        }
        setinf();
        setinf();
        getinf();
        getinf();
        sel2para();
        setinf();
        v7 = *(unsigned __int16 *)(a1 + 76);
        v8 = (unsigned int)(v7 - 448);
        if ( (unsigned __int16)(v7 - 448) > 4u )
        {
          if ( (_WORD)v7 == 614 )
            goto LABEL_14;
          if ( (unsigned __int16)v7 > 0x266u )
          {
            if ( (((_WORD)v7 - 870) & 0xFEFF) != 0 )
              goto LABEL_15;
            goto LABEL_14;
          }
          LOWORD(v7) = v7 - 354;
          if ( (unsigned __int16)v7 <= 7u )
          {
            v12 = 211;
            if ( _bittest64(&v12, v7) )
            {
LABEL_14:
              getinf();
              sub_D0A0();
            }
          }
        }
        else
        {
          v9 = 21;
          if ( _bittest64(&v9, v8) )
            goto LABEL_14;
        }
LABEL_15:
        getinf();
        split_sreg_range();
        result = getseg();
        v10 = result;
        if ( result && *(_BYTE *)(result + 184) != 2 )
        {
          result = is_spec_segm();
          if ( !(_BYTE)result )
          {
            *(_BYTE *)(v10 + 184) = 2;
            return update_segm();
          }
        }
      }
    }
  }
  return result;
}
