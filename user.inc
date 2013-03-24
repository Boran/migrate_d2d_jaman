<?php

class JamanUserMigration extends DrupalUser6Migration  {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_prenom', 'profile_');
    $this->addFieldMapping('field_nom_de_famille', 'profile_lastname');
    $this->addFieldMapping('field_numerocas', 'profile_numerocas');

    $this->addFieldMapping('field_guide_de_montagne', 'profile_chefguide');
    $this->addFieldMapping('field_chef_jeunesse_sport', 'profile_chefjs');
    $this->addFieldMapping('field_chefete', 'profile_chefete');
    $this->addFieldMapping('field_chefhiver', 'profile_chefhiver');
    $this->addFieldMapping('field_mgtnotes', 'profile_mgtnotes');
  }


  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
     return FALSE;
    }
    //if ($row->profile_chefete=='I') {  // clean some some strange inputs
    //  $row->profile_chefete='1';
    //  dsm("prepareRow() profile_chefete " . $row->profile_chefete);
    //}
  }

}

